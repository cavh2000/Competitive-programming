//https://codeforces.com/contest/313/problem/B
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int m, l, r;
    string s;
    
    cin>>s;
    vector<int> prefix(s.size());
    prefix[0]=0;
    for(int i=1;i<s.size();i++){
        if(s[i]==s[i-1])
            prefix[i]=prefix[i-1]+1;
        else
            prefix[i]=prefix[i-1];
    }
    
    cin>>m;
    
    while(m--){
        cin>>l>>r;
        cout<<prefix[r-1]-prefix[l-1]<<"\n";
    }
    

    return 0;
}