#include<bits/stdc++.h>
using namespace std;

long long invertion_count(vector<int>a, int n)
{
   long long r = 0, one = 0;

    for(int i=0; i<n; i++)
    {
        if(a[i] == 1)
            one++;
        else
            r += one;
    }
    return r;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>a(n);

        for(int i=0; i<n; i++)
            cin >> a[i];

        int index = -1;

        long long ans = invertion_count(a,n);

        for(int i=0; i<n; i++)
        {
            if(a[i] == 0)
            {
                a[i] = 1;
                index = i;
                break;
            }
        }
        ans = max(ans, invertion_count(a,n));

        if(index != -1)
        {
            a[index] = 0;
        }

        for(int i=n-1; i>=0; i--)
        {
            if(a[i] == 1)
            {
                a[i] = 0;
                index = i;
                break;
            }
        }

        ans = max(ans, invertion_count(a,n));

        cout << ans << "\n";
    }

    return 0;
}
