//Problem link: https://codeforces.com/contest/1772/problem/B

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;

    while(test--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;

        if((a<b && b<d && c<d && a<c) || (c<a && c<d && a<b && d<b) || (d<c && d<b && c<a && b<a) || (b<d && b<a && a<c && d<c))
        {
            cout<<"YES"<<"\n";
        }
        else
        {
            cout<<"NO"<<"\n";
        }
    }

    return 0;
}
