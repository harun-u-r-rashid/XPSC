/*
//Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/D

#include <bits/stdc++.h>
using namespace std;

long long total_sum(int L, int R)
{

    long long sum =(long long)(R - L + 1) * (L + R) / 2;
    return sum;
}

int main()
{
    int test;
    cin >> test;

    for (int i = 0; i < test; i++)
    {
        int L, R;
        cin >> L >> R;

        long long sum;
        if (L <= R)
        {
            sum =total_sum(L, R);
        }
        else
        {
            sum = total_sum(R, L);
        }
        cout << sum << endl;
    }

    return 0;
}

*/

#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t; cin >> t;
    for(int i=0;i<t;i++)
    {
        int l,r;
        cin>>l>>r;
        long long sum=0;
        if(l<=r)
            sum=(long long)(r-l+1)*(l+r)/2;
        else
          sum=(long long)(l-r+1)*(r+l)/2;
        cout<<sum<<"\n";
    }
    return 0;
}
