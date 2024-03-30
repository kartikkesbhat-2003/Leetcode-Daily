# Remove Duplicates from Sorted Array II

## Problem Link
[LeetCode - Remove Duplicates from Sorted Array II](https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/description/?envType=study-plan-v2&envId=top-interview-150)

## Approach
Given a sorted array `nums`, we want to remove duplicates such that duplicates are allowed at most twice, and return the new length.
- We initialize a new vector `ans` to store the modified array.
- We iterate through the array, comparing each element with the previous two elements in `ans`.
- If the current element is different from the previous two, we add it to `ans`.
- Finally, we update `nums` with `ans` and return its size.

## Time Complexity
O(n), where n is the number of elements in the array.
- We iterate through the array once.

## Space Complexity
O(n)
- We use an additional vector `ans` to store the modified array.

## Code
```cpp
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();

        if (n == 1) {
            ans.push_back(nums[0]);
            return 1;
        }

        ans.push_back(nums[0]);
        ans.push_back(nums[1]);
        int count = 0;
        for (int i = 2; i < n; i++) {
            if (ans[count] != nums[i]) {
                ans.push_back(nums[i]);
                count++;
            }
        }

        nums = ans;
        return ans.size();
    }
};
