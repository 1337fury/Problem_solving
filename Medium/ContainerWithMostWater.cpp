class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int area = std::min(height[left], height[right]) * (right - left);

        while ( left != right ) {
            if ( height[left] < height[right] )
                left++;
            else
                right--;
            int new_area = std::min(height[left], height[right]) * (right - left);
            if ( new_area > area )
                area = new_area;
        }
        return area;
    }
};
