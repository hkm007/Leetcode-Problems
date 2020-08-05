// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> m;
        
        for(int i = 0; i < nums.size(); i++) {
            if(m.find(target-nums[i]) != m.end()) return {m[target-nums[i]], i+1};
            m[nums[i]] = i+1;
        }
        return {};
    }
};