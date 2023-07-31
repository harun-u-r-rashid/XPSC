

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        vector<int>a(n);

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        int ans = 1e9 + 1;

        for(int i=0; i<n-1; i++)
        {
            int d = (a[i] - a[i+1]);

            if(d>0)
            {
                ans = 0;
            }
            else
            {

                int c = abs(d);
                ans = min(ans,(c+2)/2);

            }
        }

        cout<<ans<<"\n";
    }

    return 0;
}




/*

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;

    while(t--)
    {
        int n; cin>>n;

        vector<int>a(n);

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        int ans = 1e9 + 1;

        for(int i=1; i<n; i++)
        {
            int d = a[i] - a[i-1];

            if(d<0)
            {
                ans = 0;
            }
            else
            {

                ans = min(ans,(d+2)/2);
            }
        }

        cout<<ans<<"\n";
    }

    return 0;
}

*/




