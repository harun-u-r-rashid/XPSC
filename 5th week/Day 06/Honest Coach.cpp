
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test; cin>>test;
    while(test--)
    {
        int n; cin>>n;
        vector<int>arr(n);

        for(int i=0;i<n; i++)
        {
            cin>>arr[i];


        }
        int mn = INT_MAX;
        int ans;

        sort(arr.begin(), arr.end());

        for(int i=0; i<n-1; i++)
        {
            int dif= arr[i+1] - arr[i];

           mn = min(mn,dif);
        }
        cout<<mn<<"\n";

    }
}
