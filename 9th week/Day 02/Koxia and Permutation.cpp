
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>v(n+3);

        int a = 1;
        int b = n;

        for(int i=0; i<n; i++)
        {
           if(i%2==1)
            v[i] = a++;
            else
            {
               v[i] = b--;
            }

        }

        for(int i=0; i<n; i++)
            cout<<v[i]<<" ";

        cout<<"\n";
    }

    return 0;


}

