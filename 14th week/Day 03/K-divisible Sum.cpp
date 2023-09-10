#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n,k; cin >> n >> k;

        if(n==k) cout << 1 << "\n";

        else if(n<k)
        {
            int ans = k/n;
            if(k%n)
                ans += 1;

            cout << ans << "\n";
        }

        else
        {
            if(n%k==0) cout << 1 << "\n";
            else cout << 2 << "\n";
        }
    }
    return 0;
}
