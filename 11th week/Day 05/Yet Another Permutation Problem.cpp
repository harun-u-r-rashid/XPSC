
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>a;
        vector<int>v(n+1,0);



        for(int i=1; i<=n; i++)
        {
            if(v[i] != 1)
            {
                for(int j = i; j <= n; j *= 2)
                {
                    v[j]++;
                    a.push_back(j);
                }

            }

        }

        for(int i=0; i<a.size(); i++)
            cout << a[i] << " ";
        cout << "\n";
    }

    return 0;
}
