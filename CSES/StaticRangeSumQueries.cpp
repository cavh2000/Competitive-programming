//https://cses.fi/problemset/task/1646
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, q, a, b;
    cin>>n>>q;
    vector<unsigned long long> x(n+1);
    
    x[0]=0;
    for(int i=1;i<n+1;i++){
        cin>>x[i];
        x[i]=x[i]+x[i-1];
    }
    
    while(q--){
        cin>>a>>b;
        cout<<x[b]-x[a-1]<<"\n";
    }

    return 0;
}