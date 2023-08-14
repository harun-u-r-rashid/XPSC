
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
        int flag = 0;

        for(int i=0; i<n; i++) cin>>a[i];

        if(n%2==0)
        {
            cout<<"YES"<<"\n";
            continue;
        }

        else
        {
            for(int i=1; i<n; i++)
            {
                if(a[i]<=a[i-1])
                {
                    flag = 1;
                    break;
                }
            }

            if(flag == 1) cout<<"YES"<<"\n";
            else cout<<"NO"<<"\n";
        }
    }

    return 0;
}
