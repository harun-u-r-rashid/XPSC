//Problem link: https://codeforces.com/contest/1399/problem/A


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

        int flag = 1;

        for(int i=1; i<n; i++)
        {
            if((arr[i]-arr[i-1])>1)
            {
                flag = 0;
                break;
            }
        }

        if(flag) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";

    }

    return 0;
}
