### `09-reverse-linked-list.md`

**Link:** https://leetcode.com/problems/reverse-linked-list/

### Approach

I used three pointers: `prev`, `cur`, and `next`. For each node, I changed its `next` pointer to point to the previous node, then moved all three pointers forward until the end of the list.

### Complexity

* Time: O(n)
* Space: O(1)

### Notes

The important part is to save the next node before changing `cur->next`. Otherwise, the remaining part of the linked list would be lost. This problem helped me understand how to reverse links without creating new nodes.
