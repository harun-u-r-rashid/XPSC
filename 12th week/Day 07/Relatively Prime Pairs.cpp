#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int>a(n);

    map<int, int>mp;

    vector<int>v;

    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
        if(mp[a[i]] == 1)
            v.push_back(a[i]);

    }


    int sz = v.size();
    sort(v.begin(),v.end());


    if(sz == 1) cout << 0 << "\n";

    else if(sz == 2)
    {
        int ans = v[1] - v[0];

        if(ans%2) cout << ans << "\n";

        else cout << ans/2 << "\n";

    }

    else if(sz == 3)
    {
        if(v[1] - v[0] == v[2] - v[1])
            cout << v[1]-v[0] << "\n";
        else
            cout << -1 << "\n";
    }

    else
        cout << -1 << "\n";

    return 0;
}
