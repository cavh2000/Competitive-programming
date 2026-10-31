//https://leetcode.com/problems/counting-bits/description/
class Solution {
public:
    vector<int> countBits(int n) {
        int j, sum=0;
        vector<int> ans;
        for(int i=0;i<=n;i++){
            j=i;
            while(j){
                if(j & 1)
                    sum++;
                j= j>>1;
            }
            ans.push_back(sum);
            sum=0;
        }

        return ans;
    }
};
