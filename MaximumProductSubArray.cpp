// https://leetcode.com/problems/maximum-product-subarray/

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        int res = INT_MIN;
        int max_so_far = 1, min_so_far = 1;
        for(int i = 0; i < nums.size(); i++){
            int pro1 = max_so_far * nums[i];
            int pro2 = min_so_far * nums[i];
            max_so_far = max(nums[i], max(pro1, pro2));
            min_so_far = min(nums[i], min(pro1, pro2));
            res = max(res, max_so_far);
        }
        return res;
    }
};