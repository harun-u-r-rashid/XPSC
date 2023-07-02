#include<bits/stdc++.h>
using namespace std;


void solve()
{
   long long a,b,c; cin>>a>>b>>c;

   long long from_a = (a-1);

   long long from_b = abs(b-c) + (c-1);


   if(from_a>from_b) cout<<2<<"\n";
   else if(from_a<from_b) cout<<1<<"\n";
   else cout<<3<<"\n";

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
