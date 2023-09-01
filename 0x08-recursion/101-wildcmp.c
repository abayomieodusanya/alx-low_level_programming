#include "main.h"
#include <stdio.h>

int wildcmp(char *s1, char *s2) {
    /* If both strings are empty or equal, they are considered identical. */
    if (*s1 == '\0' && *s2 == '\0') {
        return 1;
    }

    /* If the current characters match or s2 has a '*', move both pointers. */
    if (*s1 == *s2 || *s2 == '*') {
        return wildcmp(s1 + 1, s2 + 1);
    }

    /* If s2 has a '*', try two possibilities:
     * 1. Move s1 one character ahead and keep s2 at '*'.
     * 2. Keep s1 at the current character and move s2 one character ahead.
     */
    if (*s2 == '*') {
        return wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1);
    }

    /* If none of the above conditions are met, the strings are not identical. */
    return 0;
}

int main() {
    char str1[] = "hello";
    char str2[] = "h*o";
    
    int result = wildcmp(str1, str2);
    
    if (result == 1) {
        printf("The strings are identical.\n");
    } else {
        printf("The strings are not identical.\n");
    }
    
    return 0;
}

