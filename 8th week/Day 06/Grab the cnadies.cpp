#include<bits/stdc++.h>

using namespace std;


int main()
{
    int t; cin>>t;

    while(t--)
    {
        int n; cin>>n;

        vector<int>a(n);

        int even_sum = 0;
        int odd_sum = 0;

        for(int i=0; i<n; i++)
        {
            cin>>a[i];

            if(a[i]%2)
            {
                odd_sum+=a[i];
            }

            else
            {
                even_sum+=a[i];
            }

        }

        if(even_sum>odd_sum) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }

    return 0;
}
