#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,q;
    cin >> n>> q;

    vector<int>a(n);

    map<int,int>mp;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];

        int x = a[i];

        if(mp[x] == 0)
            mp[x] = i+1;
    }

    for(int i=0; i<q; i++)
    {
        int t; cin >> t;

        int ans = mp[t];

        cout << mp[t] << " ";

        mp.erase(t);


        for(auto it:mp)
        {
            if(it.second<ans)
                mp[it.first] = it.second + 1;

        }
        mp[t] = 1;
    }
    cout << "\n";

    return 0;
}
