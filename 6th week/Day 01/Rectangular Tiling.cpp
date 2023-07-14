
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test; cin>>test;

    while(test--)
    {

       long long w,l; cin>>w>>l;
       long long ans = w*l;
        if(ans%2==0) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }

    return 0;
}
