#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int  right = height.size()-1;
        int left = 0;
        int max_capacity = 0;
        while(left < right)
        {
            int current_capacity = min(height[right], height[left]) * (right - left);
            max_capacity = max(max_capacity, current_capacity);

            if(height[right] > height[left])
            {
                left++;
            }
                
            else{
                right--;
            }
        }
        
        return max_capacity;
    }
};