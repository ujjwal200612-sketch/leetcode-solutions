# Problem: Best Time to Buy and Sell Stock (Easy)

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach

I used a single-pass approach to find the maximum profit.

I keep track of the minimum stock price seen so far. For each price, I calculate the profit by subtracting the minimum price from the current price.

If the current profit is greater than the maximum profit found so far, I update the maximum profit.

This ensures that the stock is always bought before it is sold.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The solution handles both increasing and decreasing price arrays.

I tested the solution locally using two test cases before submitting it to LeetCode.
