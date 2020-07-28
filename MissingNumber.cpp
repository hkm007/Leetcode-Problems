// https://leetcode.com/problems/missing-number/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size(), total = n*(n+1)/2, sum = 0;
        for(auto i : nums) sum += i;
        return abs(sum-total);
    }
};