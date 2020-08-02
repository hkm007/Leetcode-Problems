// https://leetcode.com/problems/word-break/

class Solution {
public:
    set<string> dict;
    map<string, bool> dp;
    
    bool fun(string s) {
        if(!s.size()) return true;
        if(dp.find(s) != dp.end()) return dp[s];
        
        for(int i = 1; i <= s.size(); i++)
            if((dict.find(s.substr(0, i)) != dict.end()) && fun(s.substr(i, s.size()))) return dp[s] = true;
        
        return dp[s] = false;
    }
    
    bool wordBreak(string s, vector<string>& wordDict) {
        for(auto word : wordDict) dict.insert(word);
        return fun(s);
    }
};