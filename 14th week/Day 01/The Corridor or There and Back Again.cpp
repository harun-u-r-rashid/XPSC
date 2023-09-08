
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {

        int n;
        cin >> n;

        vector<int>a(n);
        vector<int>b(n);

        for(int i = 0; i<n; i++)
        {
            cin >> a[i];
            cin >> b[i];

        }

        int ans = INT_MAX;

        for(int i=0; i<n; i++)
        {
            int x = (b[i] - 1)/2;
            int y = x + a[i];

            ans = min(ans, y);
        }

        cout << ans <<"\n";
    }

    return 0;
}
