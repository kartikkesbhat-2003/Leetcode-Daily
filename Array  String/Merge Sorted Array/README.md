# Merge Sorted Array

## Problem Link
[LeetCode - Merge Sorted Array](https://leetcode.com/problems/merge-sorted-array/description/?envType=study-plan-v2&envId=top-interview-150)

## Approach
To merge two sorted arrays `nums1` and `nums2`, we start from the end of both arrays and compare elements. We maintain three pointers:
- `i` points to the last element of `nums1`.
- `j` points to the last element of `nums2`.
- `k` points to the last position of the merged array.

We iterate through both arrays from the end and compare elements at `nums1[i]` and `nums2[j]`. We choose the greater element and place it at `nums1[k]`. We then decrement the corresponding pointer (`i`, `j`, or both `i` and `k`) accordingly.

Once we have iterated through one of the arrays (`nums2` in this case), we may have remaining elements in `nums2` that need to be copied to `nums1`.

## Time Complexity
O(m + n)
- We traverse both arrays once, where `m` and `n` are the lengths of `nums1` and `nums2` respectively.

## Space Complexity
O(1)
- We are not using any extra space that depends on the input size. We are performing the merge in-place within `nums1`.

## Code
```cpp
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int i = m - 1; 
        int j = n - 1;
        int k = m + n - 1;

        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--];
            } 
            else {
                nums1[k--] = nums2[j--];
            }
        }

        while (j >= 0) {
            nums1[k] = nums2[j];
            j--;
            k--;
        }
    }
};