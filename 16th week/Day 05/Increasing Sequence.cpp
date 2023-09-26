#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl "\n"


main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        vector<int>a(n);

        for(int i=0; i<n; i++) cin >> a[i];


        int ans_count = 1;

        for(int i=0; i<n; i++)
        {
            if(a[i] == ans_count)

                ans_count++;

            ans_count++;


        }

        int final_ans = ans_count - 1 ;

        cout << final_ans << nl;

    }

    return 0;
}
