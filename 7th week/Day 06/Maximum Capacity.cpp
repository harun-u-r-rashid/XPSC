
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;

    while(t--)
    {
        int x,y; cin>>x>>y;

        if(x<=8 && y*x<=500) cout<<"YES"<<"\n";

        else cout<<"NO"<<"\n";
    }
    return 0;
}
