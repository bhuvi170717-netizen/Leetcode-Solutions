### `04-best-time-to-buy-and-sell-stock.md`

```markdown
## Problem: Best Time to Buy and Sell Stock (Easy)

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach

I kept track of the minimum stock price seen so far. For every later price, I calculated the possible profit by subtracting the minimum price from the current price and updated the maximum profit.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The important condition is that the stock must be bought before it is sold. Keeping the minimum price while traversing from left to right naturally maintains this condition.
```

