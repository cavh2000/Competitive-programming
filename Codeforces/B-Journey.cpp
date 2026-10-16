//https://codeforces.com/problemset/problem/2051/B
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t, n, a, b, c;
    int com;
    cin>>t;
    
    while(t--){
        cin>>n>>a>>b>>c;
        com=((n-(n%(a+b+c)))/(a+b+c))*3;
        n=n%(a+b+c);
        if(n==0)
            cout<<com<<endl;
        else if(n<=a)
            cout<<com+1<<endl;
        else if(n<=a+b)
            cout<<com+2<<endl;
        else 
            cout<<com+3<<endl;
    }
 
    return 0;
}