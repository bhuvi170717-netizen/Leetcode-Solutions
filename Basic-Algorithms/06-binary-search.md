### `06-binary-search.md`

```markdown
## Problem: Binary Search (Easy)

**Link:** https://leetcode.com/problems/binary-search/

### Approach

I used two pointers, `left` and `right`, to represent the current search range. I checked the middle element and eliminated half of the search space depending on whether the target was smaller or larger.

### Complexity

- Time: O(log n)
- Space: O(1)

### Notes

Binary search requires the array to be sorted. Using `left + (right - left) / 2` is a safer way to calculate the middle index.
```
