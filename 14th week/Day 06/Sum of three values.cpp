#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n,x;
    cin>>n>>x;

    vector<pair<long long,int>>a(n);

    for(int i=0; i<n; i++)
    {

        cin >> a[i].first;
        a[i].second = i+1;


        //a.push_back({y, i+1});
    }


    sort(a.begin(),a.end());


    for(int i=0; i<n; i++)
    {
        long long xx= x- a[i].first;

        int k = n-1;
        for(int j=i+1; j<k; j++)
        {
            while(a[j].first + a[k].first>xx)
            {
                k--;
            }

            if(j<k && a[j].first+a[k].first==xx)
            {
                cout<<a[i].second<<" "<<a[j].second<<" "<<a[k].second<<"\n";
                return 0;
            }
        }
    }
    cout<<"IMPOSSIBLE"<<endl;

    return 0;
}
