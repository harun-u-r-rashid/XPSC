
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int>ans;

        int now = 1;


        while(now<=n)
        {
            ans.push_back(now);
            now*=2;
        }

        if(ans.back() != n)
        {
            int d = n - ans.back();

            for(int i=30; i>=0; i--)
            {
                if(d&(1<<i))
                {
                    ans.push_back(ans.back() + (1<<i));
                }
            }
        }

        reverse(ans.begin(), ans.end());

        cout << ans.size() << "\n";

        for(int i=0; i<ans.size(); i++)
        {
            cout << ans[i] << " ";
        }

        cout << "\n";

    }

    return 0;

}
