#include<bits/stdc++.h>
using namespace std;
#define int long long

main()
{
    int n;
    cin >> n;

    vector<int>a(n);

    for(int i=0; i<n; i++) cin >> a[i];
    stack<pair<int,int>>st;

    for(int i=0; i<n; i++)
    {
        while(st.size()>0 && st.top().first >= a[i])
        {
            st.pop();
        }

        if(st.size() == 0)
        {
            cout << 0 << " ";
        }

        else
        {
            cout << st.top().second << " ";
        }

        st.push({a[i], i+1});
    }


    return 0;
}
