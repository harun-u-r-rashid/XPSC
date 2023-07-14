
#include<bits/stdc++.h>
using namespace std;

int main()

{
    int test; cin>>test;

    while(test--)
    {


        int n,k; cin>>n>>k;

        int ans = 1;

        int MOD = 1e9+7;

        for(int i=0; i<n; i++)
        {
            ans = (ans*k)%MOD;

            if(k>1)
            {
                k--;
            }
        }

        cout<<ans<<"\n";


    }

    return 0;
}
