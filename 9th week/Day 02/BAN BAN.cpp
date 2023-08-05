
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;


    while(t--)
    {
        int n; cin>>n;
        cout<<(n+1)/2<<"\n";

        int A = 2, N = 3*n;

        while(N>A)
        {
            cout<<A<<" "<<N<<"\n";
            A+=3;
            N-=3;
        }
    }

    return 0;
}
