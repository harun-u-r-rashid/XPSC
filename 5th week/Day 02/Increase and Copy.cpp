
//Problem link: https://codeforces.com/contest/1426/problem/C

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test; cin>>test;

    while(test--)
    {


        int n; cin>>n;

        int sq = sqrt(n);

        int nn = n-sq;

        if(nn%sq==0)

        {
            nn = nn/sq;
            //cout<<nn<<endl;

        }

        else
        {
            nn = nn/sq+1;
            //cout<<nn<<endl;

        }


        nn = nn+sq-1;

        cout<<nn<<endl;
    }

    return 0;
}
