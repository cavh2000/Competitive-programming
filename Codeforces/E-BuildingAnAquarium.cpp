//https://codeforces.com/problemset/problem/1873/E
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, x, n, l, r, c, m;
    long long int sum, ans=-1;
    cin>>t;
    
    while(t--){
        cin>>n>>x;
        vector<int> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        
        l=1;
        r=INT_MAX;
        
        while(l<=r){
            m=l+(r-l)/2;
            sum = 0;
            for(int i=0;i<n;i++){
                if(a[i]<m)
                    sum+=m-a[i];
            }
            
            if(sum<=x){
                ans=m;
                l=m+1;
            }else
                r=m-1;
                
        }
        cout<<ans<<endl;
    }

    return 0;
}