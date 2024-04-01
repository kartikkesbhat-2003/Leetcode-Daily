# Jump Game

## Problem Link
[LeetCode - Jump Game](https://leetcode.com/problems/jump-game/?envType=study-plan-v2&envId=top-interview-150)

## Approach
Given an array `nums` where `nums[i]` represents the maximum jump length from position `i`, we are to determine if it is possible to reach the last index.
- We initialize `maxReach` to 0, which represents the maximum index we can reach so far.
- We iterate through the array, updating `maxReach` to be the maximum of its current value and the sum of the current index `i` and the jump length `nums[i]`.
- If at any point `maxReach` becomes less than the current index `i`, it means we cannot reach the last index and we return false.
- If `maxReach` becomes greater than or equal to the last index, we can reach the last index and we return true.

## Time Complexity
O(n), where n is the number of elements in the array.
- We iterate through the array once.

## Space Complexity
O(1)
- We use constant space for storing variables regardless of the size of the input.

## Code
```cpp
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int maxReach = 0;
        for (int i = 0; i < n; i++) {
            if (maxReach < i) {
                return false;
            }
            maxReach = max(maxReach, i + nums[i]);
            if (maxReach >= n - 1) {
                return true;
            }
        }
        return false;
    }
};
