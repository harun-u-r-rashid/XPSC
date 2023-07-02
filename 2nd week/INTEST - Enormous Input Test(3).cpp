#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,K; cin>>N>>K;
     int ans = 0;
    while(N--)
    {
        long long T; cin>>T;
        if(T%K == 0)
        {
            ans++;
        }
    }
    cout<<ans<<"\n";

    return 0;
}
