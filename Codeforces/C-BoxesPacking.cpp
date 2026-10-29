//https://codeforces.com/problemset/problem/903/C
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, a;
    cin>>n;
    map<int, int> mp;
    
    while(n--){
        cin>>a;
        mp[a]++;
    }
    
    int ans=0;
    for(auto it = mp.begin(); it != mp.end(); it++){
        ans = max(ans, it->second);
    }
    
    cout<<ans;

    return 0;
}
