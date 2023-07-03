//Problem link: https://www.codechef.com/problems/MOONSOON

#include<bits/stdc++.h>
using namespace std;

int main()
{

    int test;
    cin>>test;

    while(test--)
    {
        long long int N,M,H;
        cin>>N>>M>>H;

        vector<long long int>car(N);

        for(long long int i=0; i<N; i++)
        {
            cin>>car[i];
        }
        vector<long long int>outlet(M);
        for(long long int j=0; j<M; j++)
        {
            cin>>outlet[j];
        }

        sort(car.rbegin(),car.rend());
        sort(outlet.rbegin(), outlet.rend());

        long long int ans = 0;

        for(int i=0, j=0; i<N && j<M; i++,j++)
            ans+=min({car[i], H*outlet[j]});

        cout<<ans<<"\n";
    }
    return 0;

}
