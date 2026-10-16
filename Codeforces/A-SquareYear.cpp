//https://codeforces.com/problemset/problem/2114/A
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t, num, sq;
    double sqr;
    string s;
    cin>>t;
    
    while(t--){
        cin>>s;
        num=stoi(s);
        sqr=sqrt(num);
        sq=sqr;
        if(sqr-sq>0)
            cout<<"-1\n";
        else
            cout<<"0 "<<sqr<<endl;
    }
 
    return 0;
}