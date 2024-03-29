#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        vector<int> ans;
        int n = nums.size();

        if(n == 1) {
            ans.push_back(nums[0]);
            return 1;
        }

        ans.push_back(nums[0]);
        ans.push_back(nums[1]);
        int count = 0;
        for(int i  = 2 ; i < n ; i ++) {
            if(ans[count] != nums[i]) {
                ans.push_back(nums[i]);
                count ++;
            }
        }

        nums = ans;
        return ans.size();
    }
};