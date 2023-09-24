

#include<bits/stdc++.h>
using namespace std;

#define int long long
#define nl "\n"


main()

{
    int t; cin >> t;
    while(t--)
    {
        int n,x; cin >> n >> x;

        vector<int>a(n);

        for(int i=0; i<n; i++) cin >> a[i];

        int left = 0, right = LONG_MAX;

        int final_ans = 0;


        while(left<=right)
        {
            int water = 0;

            int mid = left + (right - left)/2;


            for(int i = 0; i<n; i++)
            {
                if(mid>a[i])
                {
                    water+=(mid-a[i]);
                }
            }

            if(water>x)
            {
                right = mid - 1;
            }

            else
            {

                final_ans = mid;
                left = mid + 1;


            }
        }
        cout << final_ans << nl;

    }

    return 0;
}
