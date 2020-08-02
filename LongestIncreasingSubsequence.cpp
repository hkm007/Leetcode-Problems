// https://leetcode.com/problems/longest-increasing-subsequence/

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        if(!nums.size()) return 0;
        vector<int> LIS(nums.size(), 1);
        
        for(int i = 1; i < nums.size(); i++) {
            for(int j = 0; j < i; j++) 
                if(nums[j] < nums[i] && LIS[i] < 1+LIS[j]) LIS[i] = 1+LIS[j];
        }
        
        return *max_element(LIS.begin(), LIS.end());
    }
};