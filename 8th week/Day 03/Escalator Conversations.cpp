#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,m,k,h;
        cin>>n>>m>>k>>h;

        vector<int>a(n);

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        int ans = 0;

        for(int i=0; i<n; i++)
        {

            int d = abs(h-a[i]);

            //cout<<"Difference ->"<<d<<"\n";

            //cout<<"d%l->"<<d%k<<endl;

            //cout<<"d/k-->"<<d/k<<endl;

            if(d!=0 && d%k == 0 && (d/k)<m)
            {
                ans++;
            }

            //cout<<"Ans->>"<<ans<<endl;

        }

        cout<<ans<<endl;
    }

    return 0;
}
