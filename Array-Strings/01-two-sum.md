### `01-two-sum.md`

```markdown
## Problem: Two Sum (Easy)

**Link:** https://leetcode.com/problems/two-sum/

### Approach

I used a brute-force approach by checking every pair of elements in the array. For each pair, I checked whether their sum was equal to the target. Once a valid pair was found, I returned their indices.

### Complexity

- Time: O(n²)
- Space: O(1) excluding the returned array

### Notes

The solution works for duplicate values as long as they occur at different indices. A hash table could be used to improve the time complexity to O(n).
```

