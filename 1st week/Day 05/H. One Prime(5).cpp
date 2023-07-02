//https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/H
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int X; cin>>X;

    int cnt = 0;
    for(int i=2; i<=X/2; i++)
    {
        if(X%i == 0)
        {
            cnt++;
            break;
        }
    }
    if(X != 1 && X != 0 && cnt == 0)
    {
        cout<<"YES"<<"\n";
    }
    else
    {
         cout<<"NO"<<"\n";
    }

    return 0;
}
