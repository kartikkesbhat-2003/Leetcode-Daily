# Container With Most Water

## Problem Link
[LeetCode - Container With Most Water](https://leetcode.com/problems/container-with-most-water/description/?envType=study-plan-v2&envId=top-interview-150)

## Approach
Given an array `height` representing the heights of vertical lines on a plane, we are to find the maximum area of water that can be contained between two vertical lines by selecting two indices (positions) of the array.
- We start with two pointers, one at the beginning (left) and the other at the end (right) of the array.
- We calculate the area between the lines represented by these two pointers.
- We move the pointer representing the shorter line towards the other pointer.
- We continue this process until the pointers meet.
- At each step, we update the maximum capacity of water that can be contained.

## Time Complexity
O(n), where n is the number of elements in the array.
- We iterate through the array once using two pointers.

## Space Complexity
O(1)
- We use constant space for storing variables regardless of the size of the input.

## Code
```cpp
class Solution {
public:
    int maxArea(vector<int>& height) {
        int right = height.size() - 1;
        int left = 0;
        int max_capacity = 0;
        while (left < right) {
            int current_capacity = min(height[right], height[left]) * (right - left);
            max_capacity = max(max_capacity, current_capacity);
            if (height[right] > height[left]) {
                left++;
            } else {
                right--;
            }
        }
        return max_capacity;
    }
};
