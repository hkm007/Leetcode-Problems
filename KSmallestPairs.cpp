// https://leetcode.com/problems/find-k-pairs-with-smallest-sums/

class Solution {
public:
    priority_queue<pair<int, pair<int, int>>> maxh;
    
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<vector<int>> res;
        
        for(auto i : nums1) {
            for(auto j : nums2) {
                maxh.push({i+j, {i, j}});
                if(maxh.size() > k) maxh.pop(); 
            }
        }
        
        while(maxh.size()) {
            res.push_back({maxh.top().second.first, maxh.top().second.second});
            maxh.pop();
        }
        
        return res;
    }
};