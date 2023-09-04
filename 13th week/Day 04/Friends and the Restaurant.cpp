
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

        for(int i=0; i<n; i++) cin >> a[i];

        for(int i=0; i<n; i++) cin >> b[i];

        vector<int>c;

        for(int i=0; i<n; i++)
        {
            c.push_back(b[i] - a[i]);
        }

        sort(c.rbegin(),c.rend());

        int ans = 0;
        int l = 0;
        int r = n-1;



        while(l<r)
        {
            if(c[l]+c[r]>=0)
            {
                ans++;
                l++;
                r--;
            }
            else
            {
                r--;
            }
        }

        cout << ans << "\n";


    }

    return 0;
}
