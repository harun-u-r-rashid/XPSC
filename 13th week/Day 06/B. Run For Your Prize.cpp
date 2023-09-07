
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int>a(n);

    for(int i=0; i<n; i++) cin >> a[i];


    int mx = 0;

    for(int i = 0; i<n; i++)
    {
        int x = abs(1 - a[i]);
        int y = abs(1000000 - a[i]);
        int ans = min(x,y);
        mx = max(ans,mx);

    }


    cout << mx << "\n";

    return 0;
}
