#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl "\n"

main()
{
    int n,x; cin >> n >> x;
    vector<int>a(n);

    for(int i=0; i<n; i++) cin >> a[i];

    sort(a.begin(),a.end());

    int l = 0, r = n-1;
    int cnt = 0;

    while(l<=r)
    {
        if(l==r)
        {
            cnt++;
            break;
        }

        else if(a[l] + a[r] <=x)
        {
            cnt++;
            l++;
            r--;
        }


        else
        {
            cnt++;
            r--;
        }

    }

    cout << cnt << nl;


    return 0;
}
