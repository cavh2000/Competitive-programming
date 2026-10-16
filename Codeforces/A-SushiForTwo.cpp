//https://codeforces.com/problemset/problem/1138/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t, curr=0, ans=0;
    vector<int> sum;
    cin>>n;
    
    while(n--){
        cin>>t;
        if(curr != t){
            curr = t;
            sum.push_back(ans);
            ans = 1;
        }else
            ans++;
    }
    sum.push_back(ans);

    ans=1;
    for(int i=1;i<sum.size()-1;i++){
        if(ans<min(sum[i+1], sum[i]))
            ans=min(sum[i+1], sum[i]);
    }
    
    cout<<ans*2;

    return 0;
}