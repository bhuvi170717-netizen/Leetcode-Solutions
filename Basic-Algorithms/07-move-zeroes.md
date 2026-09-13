### `07-move-zeroes.md`

```markdown
## Problem: Move Zeroes (Easy)

**Link:** https://leetcode.com/problems/move-zeroes/

### Approach

I used a position pointer to keep track of where the next non-zero element should be placed. Whenever a non-zero element was found, I swapped it with the element at the current position.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The solution modifies the array in-place and maintains the relative order of the non-zero elements.
```

