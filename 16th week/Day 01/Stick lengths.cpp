
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl "\n"

main()
{
    int n; cin >> n;
    vector<int>a(n);

    for(int i=0; i<n; i++) cin >> a[i];

    sort(a.begin(), a.end());

    int mid = n/2;

    int m = a[mid];

    int sum = 0;

    for(int i=0; i<n; i++)
    {
        sum+=abs(a[i]-a[mid]);
    }

    cout << sum << nl;

    return 0;

}
