
#include<bits/stdc++.h>
using namespace std;






int main()
{
    int test;
    cin>>test;

    while(test--)

    {
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0; i<n; i++)
            cin>>a[i];
        int flag=1;
        for(int i=1; i<n; i++)
        {
            if(a[i]!=a[0])
            {
                flag=0;
                break;
            }
        }
        if(flag)
        {
            cout<<-1<<"\n";
            continue;
        }
        int maxi=*max_element(a.begin(),a.end());
        int ans;
        for(int i=0; i<n; i++)
        {

            if(a[i]==maxi)
            {
                if(i-1>=0 && a[i-1]<a[i])
                {
                    ans = i+1;
                }
                if(i+1<n && a[i+1]<a[i])
                {
                    ans = i+1;
                }
            }


        }
        cout<<ans<<"\n";
    }


}
