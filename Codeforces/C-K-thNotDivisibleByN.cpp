//https://codeforces.com/problemset/problem/1352/C
#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned int t, n, k, l, r, m, d;
    cin>>t;
    
    while(t--){
        cin>>n>>k;
        l=0;
        r=UINT_MAX;
        while(l<=r){
            m=(l+r)/2;
            d=m/n;
            if(m-d==k){
                if(m%n==0)
                    cout<<m-1<<"\n";
                else
                    cout<<m<<"\n";
                break;
            }
            if(m-d>k)
                r=m-1;
            else 
                l=m+1;
        }
    }

    return 0;
}