#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        int ans = 0;
        vector<int>al(n);
        vector<int>bo(n);

        for(int i=0; i<n; i++)
        {
            cin>>al[i];
        }

        for(int i=0; i<n; i++)
        {
            cin>>bo[i];
        }

        for(int i=0; i<n; i++)
        {
            if(al[i]>2*bo[i])
            {
                continue;
            }

            else if(bo[i]>2*al[i])
            {
                continue;
            }

            else
            {
                ans++;
            }


        }


        cout<<ans<<"\n";

    }

    return 0;
}
