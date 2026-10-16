//https://codeforces.com/problemset/problem/600/B
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, b;
    cin>>n>>m;
    
    vector<int> a(n);
    
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a.begin(), a.end());
 
    for(int i=0;i<m;i++){
        cin>>b;
        auto it = upper_bound(a.begin(), a.end(), b);
        cout<<it - a.begin()<<" ";
    }

    return 0;
}