

//Problem link: https://codeforces.com/contest/1674/problem/A


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;

    while(test--)

    {
        int x,y;
        cin>>x>>y;

        int i=0,j=0;

        if(x==y)
        {
           i++;
           j++;

        }

        else if(y%x!=0)
        {
            i = 0;
            j = 0;

        }

        else if(y%x == 0)
        {
            i++;
            j = y/x;
        }

        cout<<i<<" "<<j<<"\n";

    }

    return 0;
}
