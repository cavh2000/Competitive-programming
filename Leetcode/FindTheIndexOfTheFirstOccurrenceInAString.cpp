//https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/description/
class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.size()<needle.size())
            return -1;
        
        int n=0;
        for(int i=0;i<haystack.size()-needle.size()+1;i++){
            for(int j=0;j<needle.size();j++){
                if(haystack[i+j]!=needle[j])
                    break;
                if(j==needle.size()-1)
                    return i;
            }
        }
        return -1;
    }
};
