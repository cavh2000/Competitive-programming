//https://leetcode.com/problems/longest-consecutive-sequence/description/
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        int n, l, longest=0;

        for(int num:s){ 
            if(s.find(num-1)==s.end()){
                n=num;
                l=1;
                while(s.find(n+1)!=s.end()){
                    l++;
                    n++;
                }
                longest = max(longest, l);
            }
            
        }

        return longest;
    }
};
