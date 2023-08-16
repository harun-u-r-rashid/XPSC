

#include<bits/stdc++.h>

using namespace std;

signed main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        long long sum=0;
        long long mn1 = INT_MAX;
        long long mn2 = INT_MAX;

        for (long long i=0; i<n; i++)
        {
            long long m;
            cin >> m;
            vector<long long>a(m);
            for (int j=0; j<m; j++) cin >> a[j];
            sort(a.begin(), a.end());

            sum+=a[1];

            mn1=min(mn1, a[0]);
            mn2=min(mn2, a[1]);
        }

        cout << sum+mn1-mn2 << "\n";
    }
}
