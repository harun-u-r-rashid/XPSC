/*
//Problem link: https://codeforces.com/contest/1843/problem/A

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
        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }


        vector<int>ans;
        sort(v.begin(),v.end());

        for(int i=0; i<n; i++)
        {
            int result = v[n-1]-v[i];
            ans.push_back(result);
            n--;
        }

        int sum = 0;
        for(int i=0; i<ans.size(); i++)
        {
            sum+=ans[i];
        }
        cout<<sum<<"\n";
    }
    return 0;
}
*/

