
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int x,y,n;
        cin>>x>>y>>n;
        int ans = 1;

        vector<int>v;

        for(int i=0; i<n; i++)
        {
            v.push_back(y);
            y-=ans;
            ans++;
        }
        int sz = v.size();

        if(v[sz-1]>=x)
        {
            cout<<x<<" ";
            for(int i=sz-2; i>=0; i--)
                cout<<v[i]<<" \n"[i==0];
        }
        else

            cout<<-1<<endl;


    }
    return 0;

}
