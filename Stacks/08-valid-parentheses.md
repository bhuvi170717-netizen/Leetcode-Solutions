### `08-valid-parentheses.md`

```markdown
## Problem: Valid Parentheses (Easy)

**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach

I used a stack to store opening brackets. Whenever a closing bracket was encountered, I checked whether it matched the most recently added opening bracket.

### Complexity

- Time: O(n)
- Space: O(n)

### Notes

The stack follows the LIFO principle, which makes it suitable for matching nested parentheses. At the end, the stack must be empty for the string to be valid.
```
