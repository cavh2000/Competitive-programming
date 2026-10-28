//https://leetcode.com/problems/subarray-sum-equals-k/description/
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ans=0, sum=0;
        unordered_map<int,int> um;
        um[0]=1;
        for(int n:nums){
            sum+=n;
            ans+=um[sum-k];
            um[sum]++;
        }

        return ans;
    }
};
