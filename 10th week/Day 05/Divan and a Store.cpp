
#include<bits/stdc++.h>
using namespace std;

#define int long long

main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, l, r, k;
        cin >> n >> l >> r >> k;

        vector<int>a(n);

        vector<int>v;


        for(int i=0; i<n; i++)

        {
            cin >> a[i];

            if(a[i] >= l && a[i] <= r)
            {
                v.push_back(a[i]);

            }
        }

        sort(v.begin(), v.end());

        int sum = 0;
        int ans = 0;


        for(int i=0; i<v.size(); i++)
        {
            sum += v[i];

            if(sum>k)
            {
                break;

            }

            ans++;
        }



        cout<<ans<<"\n";

    }

    return 0;
}
