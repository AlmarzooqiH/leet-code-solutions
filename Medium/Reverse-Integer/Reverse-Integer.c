//https://leetcode.com/problems/reverse-integer/

#include <limits.h>

int reverse(int x){
    int sign = 1, tmp = 0;
    if (x == -2147483648)
        return (0);
    if (x < 0)
    {
        sign = -1;
        x = -x;
    }
    while (x > 0){
      if (tmp > INT_MAX / 10 || (tmp == INT_MAX / 10 && (x % 10) > 7))
            return 0;
        if (tmp < INT_MIN / 10 || (tmp == INT_MIN / 10 && (x % 10) < -8))
            return 0;

        tmp = (tmp * 10) + (x % 10);
        x /= 10;
    }
    return (tmp * sign);
}
