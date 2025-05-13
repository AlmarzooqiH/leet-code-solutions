//https://leetcode.com/problems/roman-to-integer/description/

#include <stdio.h>

int romanToInt(char* s) {
    int i = 0, n = 0, sLen = 0;
    if (!s)
        return (n);
    sLen = strlen(s);
    if (sLen < 1 || sLen > 15)
        return (n);
    while (s[i] != '\0' && i < sLen)
    {
        if ((i + 1) < sLen && s[i] == 'C' && s[i + 1] == 'M')
        {
            i += 2;
            n += 900;
            continue ;
        }
        else if ((i + 1) < sLen && s[i] == 'C' && s[i + 1] == 'D')
        {
            i += 2;
            n += 400;
            continue ;
        }
        else if ((i + 1) < sLen && s[i] == 'X' && s[i + 1] == 'C')
        {
            i += 2;
            n += 90;
            continue ;
        }
        else if ((i + 1) < sLen && s[i] == 'X' && s[i + 1] == 'L')
        {
            i += 2;
            n += 40;
            continue ;
        }
        else if ((i + 1) < sLen && s[i] == 'I' && s[i + 1] == 'X')
        {
            i += 2;
            n += 9;
            continue ;
        }
        else if ((i + 1) < sLen && s[i] == 'I' && s[i + 1] == 'V')
        {
            i += 2;
            n += 4;
            continue ;
        }
        switch (s[i]){
            case 'I':
                n += 1;
                break ;
            case 'V':
                n += 5;
                break ;
            case 'X':
                n += 10;
                break ;
            case 'L':
                n += 50;
                break ;
            case 'C':
                n += 100;
                break ;
            case 'D':
                n += 500;
                break ;
            case 'M':
                n += 1000;
                break ;
        }
        i++;
    }
    return (n);
}