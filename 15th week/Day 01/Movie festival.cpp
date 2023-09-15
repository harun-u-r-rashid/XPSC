#include<bits/stdc++.h>
using namespace std;

#define int long long

main()
{
    int n;
    cin >> n;
    vector<pair<int,int>>v(n);

    for(int i=0; i<n; i++)
    {
        int a,b;
        cin >> a >> b;
        v[i].first = a;
        v[i].second = b;
    }

    sort(v.begin(), v.end());

    int ans = 1;
    int cnt = v[0].second;

    for(int i=1; i<n; i++)
    {
        if(v[i].first >= cnt)
        {
            cnt = v[i].second;
            ans++;
        }
        else
        {
            cnt = min(cnt, v[i].second);
        }
    }

    cout << ans << "\n";

    return 0;
}
