// https://leetcode.com/problems/first-unique-character-in-a-string/

class Solution {
public:
    int firstUniqChar(string s) {
        map<char, pair<int, int> > m;
        for(int i = 0; i < s.size(); i++) m[s[i]] = make_pair(m[s[i]].first+1, i);
        
        int res = INT_MAX;
        for(int i = 0; i < m.size(); i++) if(m[i].first == 1 && m[i].second < res) res =  m[i].second;
        return (res == INT_MAX) ? -1 : res;
    }
};