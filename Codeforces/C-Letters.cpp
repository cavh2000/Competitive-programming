//https://codeforces.com/problemset/problem/978/C
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,m,b,acum=0;
    vector<long long int> a;
    a.push_back(0);
    
    cin>>n>>m;
    while(n--){
        cin>>b;
        acum+=b;
        a.push_back(acum);
    }
    n=1;
    while(m--){
        cin>>b;
        if(a[n]>=b)
            cout<<n<<" "<<b-a[n-1]<<endl;
        else{
            while(a[n]<b)
                n++;
            cout<<n<<" "<<b-a[n-1]<<endl;
        }
    }

    return 0;
}