//https://codeforces.com/problemset/problem/1873/D
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,k;
    string s;
    
    cin>>t;
    
    while(t--){
        cin>>n>>k;
        cin>>s;
        
        int ans=0,l=0,r=k-1;
        
        while(l<n || r<n){
            if(s[l]=='B'){
                ans++;
                l=r+1;
                r=r+k;
            }else{
                l++;
                r++;
            }
        }
        
        cout<<ans<<endl;
    }
    
    return 0;
}