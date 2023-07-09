#include<bits/stdc++.h>
using namespace std;

int main()
{


    int n;
    cin>>n;

    vector<int>arr(n);

    for(int i=0 ; i<n; i++) cin>>arr[i];



    int t_sum = 0;
    for(int i=0; i<n; i++)
    {
        t_sum+=arr[i];
    }

    int odd_sum = 0;

    for(int i=1; i<n; i+=2)
    {
        odd_sum += arr[i];
    }


    int ans = 0;

    int even_sum = 0;

    for(int i=0; i<n; i++)
    {
        if(i%2==0)
        {
            even_sum = t_sum-odd_sum - arr[i];
        }

        else
        {
            odd_sum = t_sum - even_sum - arr[i];
        }

        if(odd_sum == even_sum)
        {
            ans++;
        }
    }

    cout<<ans<<"\n";

    return 0;


}
