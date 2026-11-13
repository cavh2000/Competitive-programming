//https://codeforces.com/problemset/problem/1843/B
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        
        long long sum = 0;
        int ans = 0;
        bool ban = false;
        
        for(int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            
            sum += abs(x);
            
            if(x < 0 && !ban){
                ans++;
                ban = true;
            }
            else if(x > 0){
                ban = false;
            }
        }
        
        cout << sum << " " << ans << "\n";
    }

    return 0;
}
