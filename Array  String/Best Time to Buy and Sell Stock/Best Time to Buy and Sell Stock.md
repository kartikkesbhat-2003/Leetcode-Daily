# Best Time to Buy and Sell Stock

## Problem Link
[LeetCode - Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/?envType=study-plan-v2&envId=top-interview-150)

## Approach
Given an array `prices` where `prices[i]` represents the price of a given stock on the ith day, we are to find the maximum profit by buying and selling the stock at most once.
- We initialize `minPrice` to be the first price in the array and `maxProfit` to be 0.
- We iterate through the prices, updating `maxProfit` to be the maximum of the current `maxProfit` and the difference between the current price and `minPrice`.
- We also update `minPrice` to be the minimum of the current `minPrice` and the current price.
- The final `maxProfit` is returned.

## Time Complexity
O(n), where n is the number of prices in the array.
- We iterate through the prices array once.

## Space Complexity
O(1)
- We use constant space for storing variables regardless of the size of the input.

## Code
```cpp
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int maxProfit = 0;

        for (int i = 1; i < prices.size(); i++) {
            maxProfit = max(maxProfit, prices[i] - minPrice);
            minPrice = min(minPrice, prices[i]);
        }

        return maxProfit;
    }
};
