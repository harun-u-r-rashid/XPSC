#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t ; cin >> t;

    while(t--)
    {
        int n; cin >> n;

        vector<int>a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int l = 0;

        while(l<n-1 && a[l+1]>=a[l])
            l++;

        while(l<n-1 && a[l+1]<=a[l])
            l++;

        if(l+1 == n) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";

    }

    return 0;
}
