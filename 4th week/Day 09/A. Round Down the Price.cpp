
//Problem link: https://codeforces.com/contest/1702/problem/A


#include<bits/stdc++.h>
using namespace std;


void solve()
{
    string s;
    cin>>s;

    int n = s.size();

    int a= stoi(s);

    int b = pow(10,n-1);

    cout<<a-b<<"\n";
}
int main()
{
    int test;
    cin>>test;
    while(test--)
    {

        solve();

    }

    return 0;
}
