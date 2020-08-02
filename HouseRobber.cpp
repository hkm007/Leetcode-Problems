// https://leetcode.com/problems/house-robber/

class Solution {
    int t[1001];
public:
    int func(vector<int>& nums, int n) {
        if(n == 0) return t[n] = 0;
        if(n == 1) return t[n] = nums[0];
        if(n == 2) return t[n] = max(nums[0], nums[1]);
        
        if(t[n] != -1) return t[n];
        
        return t[n] = max(nums[n-1]+func(nums, n-2), func(nums, n-1));
    }
                    
    int rob(vector<int>& nums) {
        memset(t, -1, sizeof(t));
        return func(nums, nums.size());
    }
};