#include<bits/stdc++.h>
using namespace std;


long long solve(long long n)
{
    long long r = 0;

    while(n>0)
    {
        r = r * 10 + n % 10;
        n = n / 10;
    }

    return r;
}

int main()
{
    long long t; cin >> t;
    while(t--)
    {
        long long n; cin >> n;


        long long rr = solve(n);

       long long cnt = 0;

       while(rr != n)
       {
           n += rr;
           rr = solve(n);
           cnt++;
       }

       cout<<cnt<<" "<<n<<"\n";


    }

    return 0;
}
