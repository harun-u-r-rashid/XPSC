#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    cin >> n >> x;
    vector<int>a(n);

    for(int i=0; i<n; i++) cin >> a[i];

    int l = 0, r = n-1, j = 0, cnt = 0, sum = 0;

    while(l<=r)
    {
        sum+=a[l];

        while(sum>=x)
        {
            if(sum == x)
            {
                cnt++;
            }
            sum-=a[j];
            j++;
        }
        l++;
    }

    cout << cnt << "\n";

    return 0;
}
