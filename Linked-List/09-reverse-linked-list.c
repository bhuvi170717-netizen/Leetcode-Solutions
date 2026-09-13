#include <stdio.h>

/*
Problem: Reverse Linked List

Test Case 1:
Input: [1,2,3,4,5]
Expected Output: [5,4,3,2,1]

Test Case 2:
Input: [1]
Expected Output: [1]
*/

struct ListNode* reverseList(struct ListNode* head)
{
    struct ListNode *prev = NULL;
    struct ListNode *cur = head;

    while (cur != NULL)
    {
        struct ListNode *next = cur->next;

        cur->next = prev;
        prev = cur;
        cur = next;
    }

    return prev;
}