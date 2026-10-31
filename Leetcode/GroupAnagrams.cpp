//https://leetcode.com/problems/group-anagrams/description/
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, int> ump;
        vector<vector<string>> ans;
        string original;
        int index = 0;
        for(string s:strs){
            original = s;
            sort(s.begin(), s.end());
            if(ump.find(s)!=ump.end()){
                ans[ump[s]].push_back(original);
            }else{
                ans.push_back({original});
                ump[s]=index;
                index++;
            }
        }

        return ans;
    }
};
