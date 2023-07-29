
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;

    while(t--)
    {
        int b,c,h; cin>>b>>c>>h;

        int ans = c+h;


        if(ans>=b)
            cout<<2*b-1<<endl;

        else
            cout<<2*ans+1<<endl;


    }

    return 0;
}
