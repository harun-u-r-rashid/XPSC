//Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/V
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m; cin>>n>>m;

    vector<int>f(m+1);

    for(int i=0; i<n; i++)
    {
        int a; cin>>a;
        f[a]++;
    }

    for(int i=1; i<=m; i++)
    {
        cout<<f[i]<<"\n";
    }
    return 0;
}


