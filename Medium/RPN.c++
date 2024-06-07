#include <iostream>
#include <vector>
#include <stack>
#include <string>

using namespace std;

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string> st;
        vector<string> tab;
        string op = "+-*/";

        for ( auto it = tokens.rbegin(); it != tokens.rend(); ++it ) {
            st.push(*it);
        }

        while (!st.empty()) {
            if (op.find(st.top()) != string::npos)
                calc(tab, st.top());
            else
                tab.push_back(st.top());
            st.pop();
        }
        return stoi(tab.back());
    }
private:
    void calc( vector<string>& tab, string& operand ) {
        int n1 = stoi(tab[tab.size() - 1]);
        int n2 = stoi(tab[tab.size() - 2]);

        int sum = 0;
        if ( operand == "+" )
            sum = n2 + n1;
        else if ( operand == "-" )
            sum = n2 - n1;
        else if ( operand == "*" )
            sum = n2 * n1;
        else
            sum = n2 / n1;
        tab.erase(tab.end() - 2, tab.end());
        tab.push_back(to_string(sum));
    }
};