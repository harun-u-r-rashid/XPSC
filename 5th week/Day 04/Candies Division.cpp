
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int a,b;
        cin>>a>>b;
        int d = a/b;
        int ans = d*b;

        int half = b/2;
        int diff = a-ans;

        if(half>diff) cout<<ans+diff<<"\n";
        else cout<<ans+half<<"\n";


    }
    return 0;

}
