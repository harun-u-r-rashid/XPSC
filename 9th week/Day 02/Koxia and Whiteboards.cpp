
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,m; cin >> n >> m;

        vector<int>a(n);
        vector<int>v(m);

        for(int i=0; i<n; i++) cin >> a[i];

        for(int i = 0; i<m; i++) cin >> v[i];


        for(int i=0; i<m; i++)

        {
            sort(a.begin(), a.end());
            a[0] = v[i];
        }

        long long sum = 0;

        for(int i=0; i<n; i++)
        {
            sum += a[i];
        }

        cout<<sum<<"\n";

    }

    return 0;
}
