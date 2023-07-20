#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test; cin>>test;

    while(test--)
    {
        int n; cin>>n;

        vector<int>arr(n);

        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }


        sort(arr.begin(),arr.end());
        int result;

        for(int i=0; i<n-1; i++)
        {
            if(arr[i]!=arr[n-1])
                result = arr[i];
        }

        cout<<result+arr[n-1]<<"\n";
    }
}
