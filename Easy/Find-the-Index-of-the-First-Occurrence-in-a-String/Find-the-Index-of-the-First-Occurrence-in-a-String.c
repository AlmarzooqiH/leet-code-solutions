//https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/description/

int strStr(char* haystack, char* needle) {
    int i, j, tmp, hlen, nlen;

    if (!haystack || !needle)
        return (-1);
    i = 0;
    hlen = strlen(haystack);
    nlen = strlen(needle);
    while(haystack[i] != '\0' && i < hlen){
        j = i;
        if (haystack[j] == needle[0]){
            tmp = 0;
            while (needle[tmp] != '\0' && haystack[j] == needle[tmp]){
                j++;
                tmp++;
            }
            if (tmp == nlen)
                return (i);
        }
        i++;
    }
    return (-1);
}
