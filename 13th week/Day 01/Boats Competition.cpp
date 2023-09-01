#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;

    while(test--)

    {
        int n;
        cin>>n;

        vector<int>a(n);

        for(int i=0; i<n; i++) cin >> a[i];

        sort(a.begin(), a.end());

int ans = 0;
        for(int k = 1; k<=100; k++)
        {
            int i=0, j=n-1;
            int cnt = 0;

            while(i<j)
            {
                if(a[i] + a[j] == k)
                {
                    i++;
                    j--;
                    cnt++;
                }
                else if(a[i] + a[j] < k)
                    i++;
                else j--;
            }
            ans = max(ans,cnt);
        }


        cout<<ans<<"\n";
    }
}
