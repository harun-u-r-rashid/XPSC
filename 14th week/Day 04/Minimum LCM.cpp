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

        int i=1;

        vector<int>a;
        while(i*i<=n)
        {
            if(n%i == 0)
            {
                a.push_back(i);
                if(n/i != i)
                    a.push_back(n/i);

            }

            i++;
        }

        sort(a.begin(), a.end());


        vector<int>v;

        for(int i=0; i<a.size()-1; i++)
        {
            int ans = abs(a[i]-a[i+1]);

            v.push_back(ans);
        }




        int mx = *max_element(v.begin(), v.end());

        cout << n-mx << " " << mx << "\n";


    }
    return 0;
}
