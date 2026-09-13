### `05-longest-common-prefix.md`

```markdown
## Problem: Longest Common Prefix (Easy)

**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach

I started with the first string as the initial prefix. I then compared it with every other string and shortened the prefix until all characters matched.

### Complexity

- Time: O(S), where S is the total number of characters examined
- Space: O(m), where m is the length of the initial prefix

### Notes

The prefix can become shorter as more strings are compared. If the prefix becomes empty, there is no common prefix.
```

