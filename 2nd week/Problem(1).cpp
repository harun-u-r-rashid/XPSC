//Problem link: https://www.codechef.com/problems/PR0BLEM?tab=statement
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        if(n==m)
        {
            cout<<"YES"<<"\n";
        }
        else
        {
            if(n>m)
            {
                swap(n,m);
            }
            if((m-n)%2==0)
            {
                cout<<"YES"<<"\n";
            }
            else
            {
                cout<<"NO"<<"\n";
            }
        }

    }
    return 0;
}
