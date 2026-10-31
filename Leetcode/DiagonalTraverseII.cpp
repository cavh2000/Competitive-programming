//https://leetcode.com/problems/diagonal-traverse-ii/description/
class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        unordered_map<int, vector<int>> mp;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums[i].size();j++){
                mp[i+j].push_back(nums[i][j]);
            }
        }

        int diagonal = 0;
        vector<int> ans;
        while(mp.find(diagonal)!=mp.end()){
            ans.insert(ans.end(), mp[diagonal].rbegin(), mp[diagonal].rend());
            diagonal ++;
        }

        return ans;
    }
};
