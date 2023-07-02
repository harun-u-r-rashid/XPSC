#include<bits/stdc++.h>
using namespace std;

 int main()
 {
     int test; cin>>test;

     while(test--)
     {
         int n; cin>>n;
        map<int,int>mp;
        for(int i=0; i<n; i++)
        {
            int x; cin>>x;
            mp[x]++;

        }

        int size_of_map = mp.size();
        if((n-size_of_map)%2==1)
        size_of_map--;
        cout<<size_of_map<<"\n";

     }
     return 0;
 }
