#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a,b;
        cin >> a>>b;

        if(a==b) cout << 2 << "\n";
        else if(a<b) cout << 1 << "\n";

        else
        {
            int ans = INT_MAX;

            if(b==1)
            {
                for(int i=1; i<50; i++)
                {
                    int cnt = 0, aa = a;

                    while(aa!=0)
                    {
                        aa = aa/(i+b);
                        cnt ++;
                    }
                    ans = min(ans, i+cnt);
                }

                cout << ans << "\n";
            }


            else
            {
                for(int i = 0; i<50; i++)
                {
                    int cnt = 0, aa = a;

                    while(aa != 0)
                    {
                        aa = aa/(i+b);
                        cnt++;
                    }

                    ans = min(ans, i+cnt);
                }

                cout << ans << "\n";

            }
        }
    }
    return 0;
}
