
#include <bits/stdc++.h>
using namespace std;


int main()
{

    int t;
    cin>>t;;
    while(t--)
    {
        long long n,c;
        cin>>n>>c;
        int ans=0;
        long long sum=0;

        vector<long long> a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            a[i]+=i+1;
        }

        sort(a.begin(),a.end());

        for(int i=0; i<n; i++)
        {


            if(sum+a[i]<=c)
            {
                sum+=a[i];
                ans++;
            }
            else
            {

                break;
            }


        }
        cout<<ans<<endl;
    }
    return 0;
}



