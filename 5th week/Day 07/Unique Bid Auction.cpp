


//Problem link: https://codeforces.com/contest/1454/problem/B

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

        vector<int>arr(n);
        vector<int>a;
        map<int,int>mp;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            mp[arr[i]]++;
        }

        for(auto it:mp)
        {
            if(it.second == 1)
            {
                a.push_back(it.first);
            }
        }


        if(a.size() == 0) cout<<-1<<"\n";
        else
        {
            for(int j=0; j<n; j++)
            {
                if(a[0]==arr[j])
                {
                    cout<<j+1<<"\n";
                    break;
                }

            }
        }

        //cout<<a[0]<<"\n";
    }
    return 0;
}







/*



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

        vector<int>arr(n);
        map<int,int>mp;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            mp[arr[i]]++;
        }


        for(auto it:mp)
        {
            if(it.second==1)
            {

                cout<<it.first<<"\n";
                break;

            }


        }


    }

    return 0;
}

*/




