//https://leetcode.com/problems/longest-palindrome-by-concatenating-two-letter-words/description/
class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        unordered_map <string,int> mp;

        for(string w:words)  
            mp[w]++;
        

        int ans=0, aux=0;

        for(auto m:mp){
            string reversed = m.first;
            reverse(reversed.begin(), reversed.end());

            if (reversed[0]==reversed[1]){
                if(m.second %2!=0){
                    ans += m.second + aux;
                    aux=-1;
                }
                else
                    ans+=m.second;
            }else if(mp.find(reversed) != mp.end()){
                ans += 2*(min(m.second, mp[reversed]));
                m.second = 0;
                mp[reversed] = 0;
            }
        }

        return ans * 2;
    }
};
