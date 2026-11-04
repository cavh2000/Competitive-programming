//https://leetcode.com/problems/find-smallest-letter-greater-than-target/description/
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        auto it = upper_bound(letters.begin(), letters.end(), target);
        if(it == letters.end())
            return letters[0];
        
        return *it;
    }
};
