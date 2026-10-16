//https://codeforces.com/problemset/problem/706/B/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q, m;
    cin>>n;
    vector<int> x(n);
    
    for(int i=0;i<n;i++)
        cin>>x[i];

    sort(x.begin(), x.end());
    
    cin>>q;
    
    while(q--){
        cin>>m;
        cout<<upper_bound(x.begin(), x.end(), m) - x.begin()<<endl;
    }
    
    return 0;
}