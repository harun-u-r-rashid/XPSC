#include<bits/stdc++.h>
using namespace std;
#define int long long


int fn( int a, int b, int c, int d, int e, int f, int n )
{


    vector<int>dp(n+1);



    for (int i = 0; i <= n; i++)
    {

        if( i == 0 )
        {
            dp[i] = a;
            continue;
        }
        if( i == 1 )
        {
            dp[i] = b;
            continue;
        }
        if( i == 2 )
        {
            dp[i] = c;
            continue;
        }
        if( i == 3 )
        {
            dp[i] = d;
            continue;
        }
        if( i == 4 )
        {
            dp[i] = e;
            continue;
        }
        if( i == 5 )
        {
            dp[i] = f;
            continue;
        }
        dp[i] = dp[i-1] + dp[i-2] + dp[i-3] + dp[i-4] + dp[i-5] + dp[i-6];
        dp[i] = dp[i] % 10000007;

    }

    return dp[n];
}

main()
{


    int t;
    int a,b,c,d,e,f,n;

    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        cin>>a>>b>>c>>d>>e>>f>>n;

        int ans = fn(a,b,c,d,e,f,n);
        ans = ans % 10000007;

        cout << "Case "<< i <<": "<< ans << endl;
    }


}
