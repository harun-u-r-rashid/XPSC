
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test; cin>>test;

    while(test--)
    {
        int n; cin>>n;

        vector<int>arr(n);
        int flag = 0;

        for(int i=0; i<n; i++) cin>>arr[i];

         for(int i=0; i<n-2; i++)
         {
             for(int j=i+1; j<n-1; j++)
             {
                 for(int k=j+1; k<n; k++)
                 {
                     if(abs(arr[i]-arr[j]) == abs(arr[j]-arr[k]))
                        flag = 1;
                 }
             }
         }

         if(flag) cout<<"NO"<<"\n";
         else cout<<"YES"<<"\n";


    }

    return 0;
}
