//https://leetcode.com/problems/plus-one/description/
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1;
        vector <int> ans;
        for(int i=digits.size()-1;i>=0;i--){
            ans.push_back((digits[i]+carry)%10);
            if(digits[i]+carry >= 10)
                carry = 1;
            else
                carry = 0;   
        }
        if(carry)
            ans.push_back(1);
        reverse(ans.begin(),ans.end());

        return ans;
    }
};
