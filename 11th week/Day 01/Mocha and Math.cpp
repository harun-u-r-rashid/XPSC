
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n ; cin >> n;

        vector<int>a(n);

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        int mn = INT_MAX;

        for(int i=0; i<n; i++)
        {
           int ans = mn & a[i];
           mn = min(mn, ans);

        }
        cout<<mn<<"\n";

    }

    return 0;
}
