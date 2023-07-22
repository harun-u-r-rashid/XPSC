

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;

    while(test--)
    {
        int n;
        cin>>n;

        vector<int>arr(n);

        for(int i=0; i<n; i++) cin>>arr[i];


        int ans = abs(arr[0]-arr[1]);

        for(int i=1; i<n-1; i++)
        {
            if(i<n)
            {

                int r1 = abs(arr[i]-arr[i-1]);
                int r2 = abs(arr[i]-arr[i+1]);
                int ans1 = max(r1,r2);
                ans = min(ans,ans1);

            }

        }

        ans = min(ans, abs(arr[n-1]-arr[n-2]));
        cout<<ans<<"\n";

    }

    return 0;
}
