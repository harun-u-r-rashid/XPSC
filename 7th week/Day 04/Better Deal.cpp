
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int a,b;
        cin>>a>>b;

        int ans1 = 100 - a;
        int ans2 = 200 - 2*b;
        if(ans1 == ans2) cout<<"BOTH"<<"\n";
        else if(ans1<ans2) cout<<"FIRST"<<"\n";
        else cout<<"SECOND"<<"\n";
    }
    return 0;
}
