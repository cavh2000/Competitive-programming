//https://leetcode.com/problems/ugly-number/
class Solution {
public:
    bool isUgly(int n) {
        if(n<=0)
            return false;
        vector<int> prim{2,3,5};
        
        for(int i : prim){
            while(n%i==0)
                n/=i;
        }
        
        return n==1;
    }
};
