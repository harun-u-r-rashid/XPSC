//Problem link: https://codeforces.com/contest/1475/problem/A


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


        if(n%2)
        {
            cout<<"YES"<<"\n";
            continue;

        }

        while(n%2==0)
        {
            n = n/2;

        }
        if(n>1) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";

    }



    return 0;
}
