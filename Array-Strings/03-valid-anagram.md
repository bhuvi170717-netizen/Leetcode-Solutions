### `03-valid-anagram.md`

```markdown
## Problem: Valid Anagram (Easy)

**Link:** https://leetcode.com/problems/valid-anagram/

### Approach

I used a frequency array of size 26 to count the occurrences of each lowercase English letter. I incremented the count for characters in the first string and decremented it for characters in the second string.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The frequency array works because the problem contains lowercase English letters. Checking the final counts determines whether the two strings are anagrams.
```

