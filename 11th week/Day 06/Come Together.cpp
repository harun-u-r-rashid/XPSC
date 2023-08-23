
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n ;
        cin >> n;
        int ans = 0;
        int mn1 = INT_MAX;
        int mn2 = INT_MAX;


        vector<int>a(n);

        for(int i=0; i<n; i++) cin >> a[i];



        for(int i=0; i<n; i++)
        {
            if(a[i] > mn1 && a[i] < mn2)
            {
                ans++;
                mn2 = min(mn2, a[i]);
                //cout << "mn2 "<<mn2<<" "<<a[i]<<"\n";
            }
            mn1 = min(mn1,a[i]);


        }
        cout << ans << "\n";

    }
    return 0;
}
