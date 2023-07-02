//Problem link: https://codeforces.com/contest/1722/problem/D
#include<bits/stdc++.h>
using namespace std;
long long solve()
{
    long long n;
    cin>>n;

    string s;
    cin>>s;
    long long sum = 0;

    vector<int>given(n,0);
    vector<int>after(n,0);

    for(long long i=0; i<n; i++)
    {
        if(s[i] == 'L')
        {
            given[i] = max(0LL,i);
        }
        else
        {
            given[i] = max(0LL, n-i-1);
        }

        after[i] = n-1-given[i];
        after[i] = after[i]-given[i];
        sum+=given[i];
    }
    sort(after.rbegin(), after.rend());

    for(long long j=1; j<=n; j++)
    {
        if(after[j-1]>0)
        {
            sum+=after[j-1];
        }
        cout<<sum<<" ";
    }
    cout<<"\n";

    return 0;
}


int main()
{
    long long test;
    cin>>test;

    while(test--)
    {
        solve();
    }
    return 0;
}
