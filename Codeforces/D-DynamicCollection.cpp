//https://codeforces.com/gym/104375/problem/D
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, q, a, b, k, op;
    cin>>n>>q;
    
    vector<int> arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    sort(arr.begin(), arr.end());
    
    while(q--){
        cin>>op;
 
        if(op==1){
            cin>>k;
            
            auto it = lower_bound(arr.begin(), arr.end(), k);
            if(*it != k){
                if (it == arr.end())
                    arr.push_back(k);
                else 
                    *it = k;
            }
        }else if (op == 2) {
            int a, b;
            cin>>a>>b;
            
            auto lo = lower_bound(arr.begin(), arr.end(), a);
            auto hi = upper_bound(arr.begin(), arr.end(), b);
            
            cout<<hi-lo<<endl;
        }
    }
 
    return 0;
}