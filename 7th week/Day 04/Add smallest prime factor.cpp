
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b; cin>>a>>b;

        int prime = 0;

           if(a%2 == 0)
           {
               prime = 2;
           }

           else if(a%3 == 0)
           {
               prime = 3;
           }

           else
           {
               prime = a;
           }

           a = a+prime;

           int difference = b - a;

           int div = difference/2;

            if(difference%2==0) cout<<div+1<<"\n";
            else cout<<div+2<<"\n";

    }
}
