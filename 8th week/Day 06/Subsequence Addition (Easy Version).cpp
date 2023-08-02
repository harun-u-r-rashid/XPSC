#include<bits/stdc++.h>
using namespace std;

void solve()
{
     int n;
        cin>>n;
        int a[n];
        for(int i = 1; i<=n; i++)
        {
            cin>>a[i];
        }

        sort(a+1,a+n+1);
        int sum;

        if(n==1)
        {
            if(a[1]!=1)
            {
                cout<<"NO"<<endl;
            }
            else cout<<"YES"<<endl;
        }
        else
        {
            sum = a[1];
            int flag = 0;
            if(a[1]!=1) flag = 1;
            for(int i=2; i<=n; i++)
            {
                if(sum < a[i])
                {
                    flag = 1;
                    break;
                }
                else sum += a[i];
            }
            if(flag)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }
        }
}
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
       solve();

    }

    return 0;
}
