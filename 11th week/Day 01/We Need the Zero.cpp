#include<bits/stdc++.h>
using namespace std;

#define int long long int

main()

{
    int t; cin>>t;

    while(t--)
    {
        int n ; cin>>n;

        vector<int>a(n);



        for(int i=0; i<n; i++)
        {
            cin >> a[i];


        }

        int x = 0;

        for(int i=0; i<n; i++)
        {
            x^=a[i];
        }

        for(int i=0; i<n; i++)
        {
            a[i]^=x;
        }

        int ans = 0;

        for(int i=0; i<n; i++)
        {
            ans^=a[i];
        }

        if(ans == 0) cout<<x<<"\n";
        else cout<<-1<<"\n";


    }

    return 0;
}
