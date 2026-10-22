//https://codeforces.com/problemset/problem/433/B
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n, m, t, l, r;
    
    cin>>n;
    vector <long long> prefix_usort(n);
    vector <long long> prefix_sort(n);
    
    cin>>prefix_sort[0];
    prefix_usort[0]=prefix_sort[0];
    
    for(int i=1;i<n;i++){
        cin>>prefix_sort[i];
        prefix_usort[i]=prefix_usort[i-1]+prefix_sort[i];
    }
    
    sort(prefix_sort.begin(), prefix_sort.end());
    
    for(int i=1;i<n;i++)
        prefix_sort[i]=prefix_sort[i]+prefix_sort[i-1];
    
    cin>>m;
    
    while(m--){
        cin>>t>>l>>r;
        
        if(t==1){
            if(l-2>=0)
                cout<<prefix_usort[r-1]-prefix_usort[l-2]<<"\n";
            else
                cout<<prefix_usort[r-1]<<"\n";
        }else{
            if(l-2>=0)
                cout<<prefix_sort[r-1]-prefix_sort[l-2]<<"\n";
            else
                cout<<prefix_sort[r-1]<<"\n";
        }
    }
    

    return 0;
}