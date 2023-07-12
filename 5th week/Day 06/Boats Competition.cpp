
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

        vector<int>arr(n);

        for(int i=0; i<n; i++) cin>>arr[i];

        sort(arr.begin(), arr.end());
        int ans = 0;

        for(int k=1; k<=100; k++)
        {
            int cnt = 0;
            int i=0, j = n-1;

            while(i<j)
            {
                if(arr[i] + arr[j] == k)
                {
                    i++;
                    j--;
                    cnt++;
                }

                else if(arr[i] + arr[j] < k) i++;
                else j--;
            }
            ans = max(ans,cnt);
        }

        cout<<ans<<"\n";
    }
}
