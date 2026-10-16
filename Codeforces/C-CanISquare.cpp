//https://codeforces.com/problemset/problem/1915/C
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    unsigned long long int sum, a;
    cin>>t;
    
    while(t--){
        cin>>n;
        sum=0;
        while(n--){
            cin>>a;
            sum+=a;
        }
        a=sqrt(sum);
        if(sqrt(sum)-a>0)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }

    return 0;
}