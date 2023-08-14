
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;

    while(test--)
    {
        long long n;
        cin>>n;
        long long arr[n];
        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
        }
        long long ans = 0, x = 0;
        for(int i=1; i<=n; i++)
        {
            if(arr[i] > i)
            {
                x = abs(i-arr[i]);
                ans = max(x,ans);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
