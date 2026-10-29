//https://codeforces.com/problemset/problem/855/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    set<string> st;
    cin>>n;
    
    string s;
    while(n--){
        cin>>s;
        if(st.find(s)!=st.end())
            cout<<"YES\n";
        else{
            cout<<"NO\n";
            st.insert(s);
        }
    }
    
    return 0;
}