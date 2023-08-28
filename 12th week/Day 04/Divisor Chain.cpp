#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {

        long long n; cin>>n;

        vector<long long>v;

        long long x = 1;

        while (x < n)
        {
            v.push_back(x);
            x = x*2;
        }


        long long s = v.size();
        long long l = v[s-1];
        long long  r = n-l;

        int flag = 0;

        if (r % 2 == 1)
        {
            flag = 1;
            r--;
        }

        for (long long i = 31; i >= 0; i--)
        {
            long long ans = r & (1 << i);
            if (ans)
            {
                l += pow(2, i);
                v.push_back(l);
            }
        }

        if (flag == 1)
        {
            v.push_back(n);
        }

        long long sz = v.size();

        cout << sz << "\n";

        reverse(v.begin(), v.end());

        for(auto it : v)
            cout << it << " ";

        cout << "\n";


    }
    return 0;
}



 
