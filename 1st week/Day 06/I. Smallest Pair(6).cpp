//Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/I
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int>arr(n);

        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        vector<long long int>result;

        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                long long int ans = arr[i]+arr[j]+j-i;
                result.push_back(ans);
            }
        }

        long long int mn = *min_element(result.begin(), result.end());
        cout<<mn<<"\n";

    }
    return 0;
}
