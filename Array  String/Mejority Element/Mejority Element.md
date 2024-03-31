# Majority Element

## Problem Link
[LeetCode - Majority Element](https://leetcode.com/problems/majority-element/?envType=study-plan-v2&envId=top-interview-150)

## Approach
Given an array of integers `nums`, the majority element is the element that appears more than ⌊n / 2⌋ times, where n is the length of the array.
- We sort the array `nums` in non-decreasing order.
- The majority element will then be the middle element of the sorted array.

## Time Complexity
O(n log n), where n is the number of elements in the array.
- Sorting the array takes O(n log n) time.

## Space Complexity
O(1)
- We do not use any extra space that grows with the size of the input.

## Code
```cpp
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        return nums[n/2];
    }
};