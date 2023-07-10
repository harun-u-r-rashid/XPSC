
//Problem link: https://codeforces.com/contest/1343/problem/B

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;

        int x = n/2;
        if(x%2==1) cout<<"NO"<<"\n";

        else
        {
            cout<<"YES"<<"\n";

            int even = 2;

            for(int i=1; i<=n/2; i++)
            {
                cout<<even<<" ";
                even = even + 2;
            }

            int last_even = even-2;

            int odd = 1;

            for(int i=1; i<n/2; i++)
            {
                cout<<odd<<" ";
                odd = odd+2;
            }

            cout<<last_even+((n/2)-1)<<"\n";

        }
    }

    return 0;
}



