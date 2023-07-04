//Problem link: https://codeforces.com/contest/1714/problem/C


#include<bits/stdc++.h>
using namespace std;

void solve()
{

   int n;
   cin>>n;
vector<int>v;
    for(int i=9; i>=1; i--)

    {
        if(n>=i)
        {
           v.push_back(i);
           n-=i;

        }
    }
    for(int i=v.size()-1; i>=0; i--)
    {
        cout<<v[i];
    }
    cout<<"\n";
}

int main()
{
    int test; cin>>test;

    while(test--)
    {
        solve();
    }
    return 0;
}
