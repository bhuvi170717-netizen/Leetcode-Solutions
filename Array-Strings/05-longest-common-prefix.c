#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
Problem: Longest Common Prefix

Test Case 1:
Input: ["flower","flow","flight"]
Expected Output: "fl"

Test Case 2:
Input: ["dog","racecar","car"]
Expected Output: ""
*/

char* longestCommonPrefix(char** strs, int strsSize)
{
    if (strsSize == 0)
        return "";

    char *prefix = malloc((strlen(strs[0]) + 1) * sizeof(char));
    strcpy(prefix, strs[0]);

    for (int i = 1; i < strsSize; i++)
    {
        int j = 0;

        while (prefix[j] != '\0' &&
               strs[i][j] != '\0' &&
               prefix[j] == strs[i][j])
        {
            j++;
        }

        prefix[j] = '\0';

        if (prefix[0] == '\0')
            break;
    }

    return prefix;
}