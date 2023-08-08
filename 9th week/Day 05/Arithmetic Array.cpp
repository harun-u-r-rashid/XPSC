
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)

    {
        int n;
        cin>>n;

        vector<int>a(n);

        int sum = 0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            sum+=a[i];
        }

        int ans;

        if(sum==n) ans = 0;
        else if(sum<n) ans = 1;
        else ans = sum-n;

        cout<<ans<<"\n";
    }

    return 0;
}
