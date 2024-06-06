#include <ctype.h>
#include <limits.h>

int skip_whitespaces(char *s) {
    if (!s)
        return 0;
    int i = 0;
    while (s && isspace(*s)) {
        s++;
        i++;
    }
    return i;
}

int myAtoi(char* s) {
    int sign = 1;
    long result = 0;

    int i = skip_whitespaces(s);
    if (!s[i])
        return 0;
    if (s[i] == '-' || s[i] == '+') {
        if (s[i] == '-')
            sign *= -1;
        i++;
    }
    while (s[i] && s[i] >= '0' && s[i] <= '9') {
        result = (result * 10) + (s[i] - 48);
        if (sign == 1 && result >= INT_MAX)
            return INT_MAX;
        if (sign == -1 && -result <= INT_MIN)
            return INT_MIN;
        i++;
    }
    return result * sign;
}