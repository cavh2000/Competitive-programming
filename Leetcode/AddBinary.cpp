//https://leetcode.com/problems/add-binary/description/
class Solution {
public:
    string addBinary(string a, string b) {
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());

        int maximum = max(a.size(),b.size()); 
        int bit1, bit2, carry=0, aux=0;
        string ans = "";
        for(int i=0;i<maximum;i++){
            bit1=0;
            bit2=0;
            if(i<a.size())
                bit1=a[i]-'0';
            if(i<b.size())
                bit2=b[i]-'0';

            if(bit1 ^ bit2 ^ carry)
                ans+="1";
            else
                ans+="0";
            carry = (bit1 & bit2) | (carry & (bit1 ^ bit2));
        }

        if(carry)
            ans+="1";

        reverse(ans.begin(), ans.end());
        return ans;
    }
};
