//https://leetcode.com/problems/sum-of-two-integers/description/
class Solution {
public:
    int getSum(int a, int b) {
        int c = 0, ans = 0, aux;
        ans = a ^ b;
        c = a & b;
        c = c<<1;
        while(c){
            aux = ans;
            ans = ans ^ c;
            c = c & aux;
            c = c<<1;
        }

        return ans;
    }
};
