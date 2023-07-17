

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test; cin>>test;

    while(test--)

    {
        int a,b,c,d; cin>>a>>b>>c>>d;

        int aa = b+c+d;
        int bb = a+c+d;
        int cc = a+b+d;
        int dd = a+b+c;

        if(a>aa || b>bb || c>cc || d>dd)
            cout<<"YES"<<"\n";

        else
            cout<<"NO"<<"\n";
    }

    return 0;
}
