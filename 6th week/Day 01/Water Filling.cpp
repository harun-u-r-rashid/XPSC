
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test; cin>>test;

    while(test--)

    {
        int a,b,c; cin>>a>>b>>c;

        int ans = a+b+c;

        if(ans>=2) cout<<"Not now"<<"\n";

        else cout<<"Water filling time"<<"\n";
    }

    return 0;
}
