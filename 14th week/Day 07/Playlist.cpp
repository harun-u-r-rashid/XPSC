

#include<bits/stdc++.h>
using namespace std;

#define int long long

 main()
{
    int n;
    cin >> n;
    vector<int>a(n);

    for(int i = 0; i <n; i++) cin >> a[i];


    set<int>st;

    int i=0, j = 0;
    int ans = INT_MIN;

    while(i<n and j<n)
    {
        if(j<n && !st.count(a[j]))
        {
            st.insert(a[j]);
            ans = max(ans, j-i+1);
            j++;
        }

        else if(j<n && st.count(a[j]))
        {
            st.erase(a[i]);
            i++;
        }
    }


    cout << st.size() << "\n";



    cout << ans << "\n";


    return 0;
}
