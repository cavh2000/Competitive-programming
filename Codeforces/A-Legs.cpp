//https://codeforces.com/problemset/problem/1996/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    
    cin>>t;
    
    while(t--){
        cin>>n;
        cout<<((n-(n%4))/4) + ((n%4)/2)<<endl;
    }

    return 0;
}