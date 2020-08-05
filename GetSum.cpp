// https://leetcode.com/problems/sum-of-two-integers/

class Solution {
public:
    int getSum(int a, int b) {
        while (b) {
            int c = (a & b & 0x7fffffff) << 1;
            a = a ^ b;
            b = c;
        }
        return a;
    }
};