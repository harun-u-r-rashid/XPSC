
#include <bits/stdc++.h>
using namespace std;


int gcd(int a, int b)
{
    return __gcd(a,b);
}

int main()
{
    int t;
    cin >> t;
    while(t--)

    {

        int n;
        cin>>n;
        vector<int> v(1001,0);
        int mx=-1;
        for(int i=1; i<=n; i++)
        {
            int x;
            cin >> x;
            v[x] = i;

        }

        for(int i=1; i<=1000; i++)
        {
            for(int j=1; j<=1000; j++)
            {
                if(v[i] && v[j] && gcd(i,j)==1)
                {
                    mx=max(mx,v[i]+v[j]);
                }
            }
        }
        cout << mx << "\n";
    }
    return 0;
}
