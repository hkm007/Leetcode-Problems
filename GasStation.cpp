// https://leetcode.com/problems/gas-station/

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int bal = 0, idx = 0, curr = 0;
        for(int i = 0; i < gas.size(); i++) {
            curr += gas[i]-cost[i];
            bal += gas[i]-cost[i];
            
            if(curr < 0) {
                curr = 0;
                idx = i+1;
            }
        }
        return (bal < 0) ? -1 : idx;
    }
};