#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int x,y,h;
        cin>>x>>y>>h;

        int ans = x-h;

        if(ans%y==0)
            cout<<(ans/y)+1<<"\n";
        else cout<<(ans/y)+2<<"\n";
    }


    return 0;
}
