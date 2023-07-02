//Problem link: https://codeforces.com/contest/1741/problem/B

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    if(n==3) cout<<-1<<"\n";
    else if(n==5) cout<<5<<" "<<4<<" "<<1<<" "<<2<<" "<<3<<"\n";
    else
    {
        if(n%2==0)
        {
            for(int i=n; i>=1; i--)
            {
                cout<<i<<" ";
            }

            cout<<"\n";
        }
        else
        {

            int ans1 = n/2;
            int ans2 = n/2+1;
            swap(ans1,ans2);

            for(int i=n; i>=1; i--)

            {
                if(i==n/2)
                {
                    cout<<i+1<<" ";
                }
                else if(i == n/2+1)
                {
                    cout<<i-1<<" ";
                }
                else
                {
                    cout<<i<<" ";
                }


            }

            cout<<"\n";



//            for(int i=(n+1)/2; i<=n; i++)
//            {
//                cout<<i<<" ";
//            }
//
//            for(int i=n/2; i>=1; i--)
//            {
//                cout<<i<<" ";
//            }
//
//
//            cout<<"\n";

        }
    }

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

