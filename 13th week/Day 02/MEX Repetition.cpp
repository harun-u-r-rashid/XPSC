
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;

        k%=(n+1);

        vector<int>a(n);

        vector<int>v(n+1,0);

        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            v[a[i]] = 1;
        }

        int nai = -1;

        for(int i=0; i<=n; i++)
        {
            if(v[i] == 0)
                nai = i;

        }

        deque<int>dq(a.begin(),a.end());

        for(int i=0; i<k; i++)
        {
            int value = nai;

            dq.push_front(value);
            nai = dq.back();

            dq.pop_back();

        }

        for(int i=0; i<dq.size(); i++)
            cout << dq[i] << " ";

        cout << "\n";

    }



    return 0;
}
