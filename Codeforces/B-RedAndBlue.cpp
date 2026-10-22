//https://codeforces.com/problemset/problem/1469/B
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t, n, m, ans, maximum, prefix, b, r;
    cin>>t;
    
    while(t--){
        ans=0;
        cin>>n;
        prefix=0;
        maximum=0;
        while(n--){
            cin>>r;
            prefix+=r;
            maximum=max(maximum, prefix);
        }
        ans+=maximum;
        maximum=0;
        
        cin>>m;
        prefix=0;
        while(m--){
            cin>>b;
            prefix+=b;
            maximum=max(maximum, prefix);
        }
        ans+=maximum;
        
        cout<<ans<<"\n";
    }

    return 0;
}