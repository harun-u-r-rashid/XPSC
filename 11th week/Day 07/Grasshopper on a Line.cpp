#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x,k;
        cin >> x >> k;
        if(k>=x)
        {

            if(x%k!=0)
            {
                cout << 1 << "\n";
                cout << x << "\n";
            }
            else
            {
                cout << 2 << "\n";
                cout << 1 << " "<< x-1 << "\n";
            }
        }
        else
        {
            if(x%k != 0)
            {
                cout << 1 <<"\n";
                cout << x <<"\n";
            }
            else
            {

                int ans;
                cout << 2 << "\n";
                for(int i=2; i<=x; i++)
                {
                    if(i%k!=0)
                        ans = i;
                }
                cout << x-ans << " " << ans <<"\n";
            }
        }
    }

    return 0;
}
