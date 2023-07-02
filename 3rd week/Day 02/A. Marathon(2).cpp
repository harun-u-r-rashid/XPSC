//https://codeforces.com/contest/1692/problem/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test; cin>>test;
    while(test--)
    {
        int a,b,c,d; cin>>a>>b>>c>>d;
        int cnt = 0;
        if(b>a) cnt++;
        if(c>a) cnt++;
        if(d>a) cnt++;

        cout<<cnt<<"\n";
    }

    return 0;
}
