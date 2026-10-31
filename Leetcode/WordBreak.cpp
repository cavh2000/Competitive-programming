//https://leetcode.com/problems/word-break/description/
class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        set<string> st;
        set<int> seen;
        for(string word:wordDict)
            st.insert(word);
        
        queue<int> q;
        q.push(0);

        while(!q.empty()){
            int current = q.front();
            q.pop();
            if(seen.find(current)==seen.end()){
                for(int i=current+1;i<=s.size();i++){
                    if(st.find(s.substr(current,i-current))!=st.end()){
                        if(i==s.size())
                            return true;
                        q.push(i);
                    }
                }
                seen.insert(current);
            }
        }

        return false;
    }
};
