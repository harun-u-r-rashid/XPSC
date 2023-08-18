

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;

    while(t--)
    {
        int n; cin >> n;

        string s; cin >> s;

        string ss = s;

        sort(ss.begin(),ss.end());

        if(is_sorted(s.begin(),s.end()))
        {
            cout << 0 << "\n";
            continue;
        }

        cout<<1<<"\n";

        vector<int>v;

        for(int i = 0; i < n; i++)
        {
            if(s[i] != ss[i])
                v.push_back(i);
        }

        cout << v.size() << " ";

        for(int i = 0; i < v.size(); i++)
        {
            cout << v[i]+1 << " ";
        }
        cout << "\n";
    }

    return 0;
}

