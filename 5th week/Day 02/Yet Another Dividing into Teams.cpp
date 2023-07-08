//Problem link: https://codeforces.com/contest/1249/problem/A


#include<bits/stdc++.h>
using namespace std;

int main()
{


    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;

        vector<int>arr(n);

        for(int i=0; i<n; i++) cin>>arr[i];

        sort(arr.begin(), arr.end());


        int cnt = 0;

        for(int i=1; i<n; i++)
        {

            int x = (abs(arr[i]-arr[i-1]));

            if(x<=1)
            {
                cnt = 1;
                break;
            }

        }

        cout<<cnt+1<<"\n";

    }

    return 0;
}
