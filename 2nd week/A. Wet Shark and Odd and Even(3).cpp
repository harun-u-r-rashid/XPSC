#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long sum = 0;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    vector<int>v;
    for(int i=0; i<n; i++)
    {
        if(arr[i]%2!=0)
        {
            v.push_back(arr[i]);
        }
    }
    int sz = sizeof(v)/sizeof(v[0]);
    int ans = *min_element(v, v+sz);
    if(sum%2==0)
    {
        cout<<sum<<endl;
    }
    else
    {
        cout<<sum-ans<<endl;
    }

    return 0;
}
