# Best Time to Buy and Sell Stock II

## Problem Link
[LeetCode - Best Time to Buy and Sell Stock II](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/?envType=study-plan-v2&envId=top-interview-150)

## Approach
Given an array `prices` where `prices[i]` represents the price of a given stock on the ith day, we are to find the maximum profit by buying and selling the stock multiple times. You may complete as many transactions as you like (i.e., buy one and sell one share of the stock multiple times).
- We iterate through the prices array once.
- If the price of the stock on the current day is greater than the price of the stock on the previous day, we add the difference to the total profit.
- We return the total profit.

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
        int profit = 0;
        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] > prices[i - 1]) {
                profit += (prices[i] - prices[i - 1]);
            }
        }
        return profit;
    }
};
