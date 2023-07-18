
#include<bits/stdc++.h>
using namespace std;

int  main()
{
    int test; cin>>test;

    while(test--)
    {
        int n,m; cin>>n>>m;

       float a = 0.1;

       float ans = n-n*a;

       if(ans < m) cout<<"ONLINE"<<"\n";

       else if(ans > m) cout<<"DINING"<<"\n";


       else cout<<"EITHER"<<"\n";


    }

    return 0;
}
