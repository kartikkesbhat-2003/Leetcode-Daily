# Remove Duplicates from Sorted Array

## Problem Link
[LeetCode - Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/?envType=study-plan-v2&envId=top-interview-150)

## Approach
Given a sorted array, we want to remove the duplicates in-place such that each element appears only once and returns the new length. We use two pointers: `i` and `j`. 
- Pointer `i` represents the last unique element found.
- Pointer `j` traverses the array to find unique elements.
- If `nums[j]` is different from `nums[i]`, we move `nums[j]` to `nums[i+1]` and increment `i`.

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
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        for (int j = 0; j < nums.size(); j++) {
            if (nums[j] != nums[i]) {
                nums[i + 1] = nums[j];
                i++;
            }
        }
        return i + 1;
    }
};
