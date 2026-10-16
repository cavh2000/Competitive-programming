//https://codeforces.com/problemset/problem/492/B
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long l;
    cin>>n>>l;
    vector<long long> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a.begin(), a.end());
    
    double d = a[0];
    for(int i=1;i<n;i++)
        d=max(d,((a[i]-a[i-1])/2.0));
    
    d=max(d,(double)(l-a[n-1]));
    
    cout << fixed << setprecision(10) << d << '\n';

    return 0;
}