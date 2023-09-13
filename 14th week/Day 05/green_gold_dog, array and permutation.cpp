
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while(t--)
    {

        long long n;
        cin >> n;

        vector<pair<long,long>>a;

        for(long long i=0; i<n; i++)
        {
            long long x;
            cin >> x;
            a.push_back({x,i});
        }

        sort(a.begin(), a.end());

        long long nn = n;

        for(long long i=0; i<n; i++)
        {
            a[i].first = nn;
            nn--;
        }

        vector<long long>ans(n);

        for(long long i=0; i<n; i++)
        {
            ans[a[i].second] = a[i].first;
        }

        for(long long i = 0; i<n; i++)
            cout << ans[i] << " ";
        cout << "\n";


    }

    return 0;
}

 
