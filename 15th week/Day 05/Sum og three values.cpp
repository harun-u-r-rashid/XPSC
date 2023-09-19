#include<bits/stdc++.h>
using namespace std;
#define int long long

main()
{
    int n,k;
    cin >> n >> k;
    vector<pair<int,int>>a(n);

    for(int i=0; i<n; i++)
    {
        cin >> a[i].first;
        a[i].second = i+1;
    }


    sort(a.begin(), a.end());

    for(int i=0; i<n ; i++)
    {
        int kk = k-a[i].first;


        int m = n-1;

        for(int j=i+1; j<m; j++)
        {
            while(a[j].first + a[m].first> kk)
            {
                m--;
            }

            if((j<m)  && a[j].first + a[m].first == kk)
            {
                cout << a[i].second << " " << a[j].second << " " << a[m].second << "\n";
                return 0;


            }
        }
    }

    cout << "IMPOSSIBLE\n";



    return 0;
}
