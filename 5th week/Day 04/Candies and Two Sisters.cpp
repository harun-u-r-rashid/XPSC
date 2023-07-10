//Problem link: https://codeforces.com/contest/1335/problem/A


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;

    while(test--)
    {
        long long n;
        cin>>n;

        if(n==1 || n == 2) cout<<0<<"\n";

        else if(n%2==0) cout<<(n/2)-1<<"\n";

        else if(n%2==1) cout<<(n/2)<<"\n";
    }

    return 0;
}
