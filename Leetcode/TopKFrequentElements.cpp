//https://leetcode.com/problems/top-k-frequent-elements/description/
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> um;
        for(int n:nums){
            um[n]++;
        }
        priority_queue<pair<int,int>> pq;
        for(auto u:um){
            pq.push({u.second, u.first});
        }
        vector<int> ans;
        for(int i=0;i<k;i++){
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
    }
};
