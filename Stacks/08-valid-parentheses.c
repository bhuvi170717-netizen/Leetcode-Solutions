#include <stdio.h>
#include <stdbool.h>

/*
Problem: Valid Parentheses

Test Case 1:
Input: "()[]{}"
Expected Output: true

Test Case 2:
Input: "(]"
Expected Output: false
*/

bool isValid(char* s)
{
    char stack[10000];
    int top = -1;

    for (int i = 0; s[i] != '\0'; i++)
    {
        char ch = s[i];

        if (ch == '(' || ch == '[' || ch == '{')
        {
            stack[++top] = ch;
        }
        else
        {
            if (top == -1)
                return false;

            char open = stack[top--];

            if ((ch == ')' && open != '(') ||
                (ch == ']' && open != '[') ||
                (ch == '}' && open != '{'))
            {
                return false;
            }
        }
    }

    return top == -1;
}