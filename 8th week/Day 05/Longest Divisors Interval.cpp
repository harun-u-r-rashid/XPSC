#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long n;
        cin>>n;

        int ans = 0;
        int cnt = 0;

        for(int i=1; i<=50; i++)
        {
            if(n%i==0)
            {
               cnt++;
            }

            else
            {
                cnt = 0;
            }


           ans = max(ans,cnt);
        }


        cout<<ans<<"\n";
    }

    return 0;
}
