//https://codeforces.com/problemset/problem/1709/B
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m,s,t;
    cin>>n>>m;
    
    vector<long long> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    
    vector<vector<long long>> prefix(n, vector<long long>(2));
    prefix[0][0]=0;
    for(int i=1;i<n;i++)
        prefix[i][0] = a[i-1]-a[i] > 0 ? a[i-1]-a[i] + prefix[i-1][0] : prefix[i-1][0];
    
    prefix[n-1][1]=0;
    for(int i=n-2;i>=0;i--)
        prefix[i][1] = a[i+1]-a[i] > 0 ? a[i+1]-a[i] + prefix[i+1][1] : prefix[i+1][1];
    
    while(m--){
        cin>>s>>t;
        if(s<t)
            cout<<prefix[t-1][0]-prefix[s-1][0]<<"\n";
        else
            cout<<prefix[t-1][1]-prefix[s-1][1]<<"\n";
    }
    return 0;
}