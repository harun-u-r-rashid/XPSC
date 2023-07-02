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
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        long long ans = 0, x = 0;
        for(int i=0; i<n; i++)
        {
            if(arr[i] > (i+1))
            {
                x = abs((i+1)-arr[i]);
                ans = max(x,ans);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}

