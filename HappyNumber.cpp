// https://leetcode.com/problems/happy-number/

class Solution {
public:
    bool isHappy(int n) {
        if(n == 1 || n == 7) return true;
        
        int sum = 0;
        while(n) {
            int rem = n%10;
            sum += rem*rem;
            n /= 10;
        }
        
        return (sum < 9 && sum != 1 && sum != 7) ? false : isHappy(sum);
    }
};