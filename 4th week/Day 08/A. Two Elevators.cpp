//Problem link: https://codeforces.com/contest/1729/problem/A


#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b,c; cin>>a>>b>>c;

    long long ans1 = (a-1);
    long long ans2 = abs(b-c) + (c-1);



    if(ans1>ans2) cout<<2<<endl;
    else if(ans1<ans2) cout<<1<<endl;
    else cout<<3<<endl;

}

int main()
{
    int test; cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
