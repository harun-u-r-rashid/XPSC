
//Problem link: https://codeforces.com/contest/1352/problem/B


#include<bits/stdc++.h>
using namespace std;


int main()
{
    int test; cin>>test;

    while(test--)
    {
        int n,k; cin>>n>>k;


        if(n<k) cout<<"NO"<<"\n";

        else if(n==k)
        {
            cout<<"YES"<<"\n";
            for(int i=0; i<k; i++)
            {
                cout<<1<<" ";
            }
            cout<<"\n";
        }

        else if(n%2==1 && k%2==0)
        {
            cout<<"NO"<<"\n";
        }

        else if(n%2==1 && k%2==1)
        {
            cout<<"YES"<<"\n";
            for(int i=0; i<k-1; i++)
            {
                cout<<1<<" ";
            }
            cout<<(n-k+1)<<"\n";

        }

        else if(n%2==0 && k%2==0)
        {
            cout<<"YES"<<"\n";

            for(int i=0; i<k-1; i++)
            {
                cout<<1<<" ";
            }
            cout<<(n-k+1)<<"\n";
        }

        else
        {
            if(n<2*k) cout<<"No"<<"\n";

            else
            {
                cout<<"YES"<<"\n";

                for(int i=0; i<k-1; i++)
                {
                    cout<<2<<" ";
                }
                cout<<(n-(2*k)+2)<<"\n";
            }
        }
    }

    return 0;
}
