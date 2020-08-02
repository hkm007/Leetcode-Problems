// https://leetcode.com/problems/maximum-subarray/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int global = INT_MIN, local = 0;
        int n = nums.size();
        
        for(int i = 0; i < n; i++) {
            local += nums[i];
            global = max(global, local);
            if(local < 0) local = 0;
        }
        
        return global;
    }
};