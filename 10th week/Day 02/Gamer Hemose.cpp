
#include<bits/stdc++.h>
using namespace std;

#define int long long

main()
{
    int t; cin>>t; while(t--)
    {
        int n, h; cin>>n>>h;

        vector<int>a(n);

        for(int i=0; i<n; i++) cin>>a[i];

        sort(a.begin(),a.end());

        int sum = a[n-1] + a[n-2];

        int l = a[n-1];
        int sl = a[n-2];


        if(h<=l) cout<<1<<"\n";

        else if(h<=sum) cout<<2<<"\n";

        else
        {
            if(h%sum == 0) cout<<2*(h/sum)<<"\n";
            else
            {
                int ans = 2*(h/sum) ;
                if(h%sum > l) ans+=2;

                else
                    ans+=1;
                cout<<ans<<"\n";
            }
        }


    }

    return 0;
}
