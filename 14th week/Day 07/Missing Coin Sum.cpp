#include<bits/stdc++.h>
using namespace std;
#define int long long



main()
{
    int n;
    cin >> n;

    vector<int>a(n);
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(),a.end());

    int sum = 1;

    for(int i=0; i<n; i++)
    {
        if(a[i] > sum)
        {
            break;
        }
        sum +=a[i];
    }

    cout << sum << "\n";

    return 0;
}
