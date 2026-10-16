//https://codeforces.com/problemset/problem/2000/B
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, a, aux, ban;
    unordered_set <int> uos;
    
    cin>> t;
    while(t--){
        uos.clear();
        cin>>n;
        aux=n-1;
        cin>>a;
        uos.insert(a);
        ban = 1;
        while(aux--){
            cin>>a;
            if(uos.find(a-1)==uos.end() && uos.find(a+1)==uos.end())
                ban = 0;
            uos.insert(a);
        }
        if(ban)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    

    return 0;
}