//https://codeforces.com/problemset/problem/4/C
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    unordered_map <string, int> ump;
    cin>>n;
    
    string s;
    while(n--){
        cin>>s;
        
        if(ump[s]==0){
            cout<<"OK\n";
        }else{
            cout<<s<<ump[s]<<"\n";
        }
        ump[s]++;
    }
    
    return 0;
}