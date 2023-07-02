#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n ;
    cin>>n;

    vector<int>arr(n);
    long long sum = 0;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    long long  sum_i = 0;
    int count_i = 0;
    int minimum = n;

    for(int i=0; i<n; i++)
    {
        sum_i+=arr[i];
        count_i++;
        int temp_count = 0;
        if(sum%sum_i == 0)
        {
            temp_count = count_i;

            long long temp_sum = 0;
            int main_count = 0;

            for(int j=i+1; j<n; j++)
            {
                temp_sum+=arr[j];
                main_count++;
                if(sum_i == temp_sum)
                {
                    temp_count = max(temp_count, main_count);
                    temp_sum = 0;
                    main_count = 0;
                }
            }
            if(temp_sum == 0)
            {
                minimum = min(minimum,temp_count);
            }
        }
    }
    cout<<minimum<<endl;
}
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        solve();
    }

    return 0;
}
