
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

        int ans = 0;

        vector<int>a(n);

        for(int i=0; i<n; i++)
        {
            cin>>a[i];

        }


        for(int i=0; i<n; i++)
        {
            if(a[i] == (i+1))
            {
                ans++;
            }
        }

        if(ans%2==0)
        {
            cout<<ans/2<<endl;
        }

        else
            cout<<(ans/2)+1<<endl;

    }

    return 0;
}
