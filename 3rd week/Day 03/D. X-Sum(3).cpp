//Problem link: https://codeforces.com/contest/1676/problem/D
#include<bits/stdc++.h>
using namespace std;
void solve()
{

    long long n,m;
    cin>>n>>m;
    long long mx = 0;
    long long arr[n][m];

    for(long long i=0; i<n; i++)
    {
        for(long long j=0; j<m; j++)
        {
            cin>>arr[i][j];
        }
    }

    for(long long i=0; i<n; i++)
    {
        for(long long j=0; j<m; j++)
        {
            long long sum = 0;
            sum+= arr[i][j];

            long long ii = i-1, jj= j-1;

            while(ii>=0 && jj>=0)
            {
                sum+=arr[ii][jj];
                ii--;
                jj--;

            }
            ii = i-1;
            jj = j+1;

            while(ii>=0 && jj<m)
            {
                sum+=arr[ii][jj];
                ii--;
                jj++;
            }
            ii = i+1;
            jj = j-1;
            while(ii<n && jj>=0)
            {
                sum+=arr[ii][jj];
                ii++;
                jj--;
            }
            ii = i+1;
            jj = j+1;

            while(ii<n &&jj<m)
            {
                sum+= arr[ii][jj];
                ii++;
                jj++;
            }
            mx = max(sum, mx);
        }
    }
    cout<<mx<<"\n";
}

int main()
{

    long long test;
    cin>>test;

    while(test--)
    {
        solve();
    }
    return 0;
}

