#include <stdio.h>

/*
Problem: Reverse String

Test Case 1:
Input: ["h","e","l","l","o"]
Expected Output: ["o","l","l","e","h"]

Test Case 2:
Input: ["H"]
Expected Output: ["H"]
*/

void reverseString(char* s, int sSize)
{
    int left = 0;
    int right = sSize - 1;

    while (left < right)
    {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }
}