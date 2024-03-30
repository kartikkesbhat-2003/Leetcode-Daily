# Remove Element

## Problem Link
[LeetCode - Remove Element](https://leetcode.com/problems/remove-element/description/?envType=study-plan-v2&envId=top-interview-150)

## Approach
Given an integer array `nums` and an integer `val`, we want to remove all occurrences of `val` in-place and return the new length of the array. We use two pointers: `i` and `j`.
- Pointer `i` traverses the array.
- Pointer `j` represents the index where the next non-`val` element should be placed.
- If `nums[i]` is not equal to `val`, we move `nums[i]` to `nums[j]` and increment `j`.

## Time Complexity
O(n), where n is the number of elements in the array.
- We iterate through the array once.

## Space Complexity
O(1)
- We are modifying the input array in-place without using any extra space.

## Code
```cpp
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int j = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[j++] = nums[i];
            }
        }
        return j;
    }
};
