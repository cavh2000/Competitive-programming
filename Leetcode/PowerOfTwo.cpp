//https://leetcode.com/problems/power-of-two/description/
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0)
            return false;

        double d = log2(n);
        int i = d;
        if(d-i > 0)
            return false;
        return true;
    }
};
