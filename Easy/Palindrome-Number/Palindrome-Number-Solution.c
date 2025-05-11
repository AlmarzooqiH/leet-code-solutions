//https://leetcode.com/problems/palindrome-number/description/

#include <stdbool.h>

int getIntLength(int x){
    if (x == 0)
        return (1);
    int len = 0;
    while (x > 0){
        len++;
        x/= 10;
    }
    return (len);
}

bool isPalindrome(int x) {
    if (x < 0)
        return (false);
    int tmp = x;
    int len = getIntLength(x);
    int *rev = (int *)malloc(sizeof(int) * len);
    if (!rev)
        return (false);
    for (int i = 0; i < len; i++)
    {
        rev[i] = tmp % 10;
        tmp /= 10;
    }
    for (int i = 0, j = len - 1; i < j; i++, j--) {
        if (rev[i] != rev[j]) {
            free(rev);
            return false;
        }
    }

    free(rev);
    return (true);
}
