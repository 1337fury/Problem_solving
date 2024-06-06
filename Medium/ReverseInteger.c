#include <stdio.h>
#include <limits.h>

int reverse(int x){
    long rs = 0;
    int ld = 0;
    while (x) {
        ld = x % 10;
        rs = rs * 10;
        rs = rs + ld;
        if (rs > INT_MAX || rs < INT_MIN)
            return 0;
        x /= 10;
    }
    return rs;
}