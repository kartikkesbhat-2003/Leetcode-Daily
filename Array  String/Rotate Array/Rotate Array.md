# Rotate Array

## Problem Link
[LeetCode - Rotate Array](https://leetcode.com/problems/rotate-array/?envType=study-plan-v2&envId=top-interview-150)

## Approach
Given an array `nums` and an integer `k`, we are to rotate the array to the right by `k` steps.
- To achieve this, we first reverse the entire array.
- Then, we reverse the first `k%n` elements, where `n` is the size of the array.
- Finally, we reverse the remaining elements.

## Time Complexity
O(n), where n is the number of elements in the array.
- Reversing the array takes O(n) time.
- Reversing the first `k%n` elements and the remaining elements also take O(n) time.

## Space Complexity
O(1)
- We do not use any extra space that grows with the size of the input.

## Code
```cpp
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + (k % n));
        reverse(nums.begin() + (k % n), nums.end());
    }
};
