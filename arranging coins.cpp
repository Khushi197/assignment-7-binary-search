https://leetcode.com/problems/arranging-coins/submissions/897053946/
class Solution {
public:
    int arrangeCoins(long long n) {
        long long  k=0;
        k=(sqrt(2*n+0.25) - 0.5);
        return k;
    }
};
