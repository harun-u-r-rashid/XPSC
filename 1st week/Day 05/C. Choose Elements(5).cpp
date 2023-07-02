//Problem link:
#include<bits/stdc++.h>
using namespace std;

int main()

{

    int N, K;
    cin>>N>>K;
    long long sum=0;
   long long arr[N];
    for(int i=0; i<N; i++)
    {
        cin>>arr[i];
    }

    sort(arr, arr+N);
    reverse(arr, arr+N);
    for(int i=0; i<K; i++)
    {
        if(arr[i]<0)
        {
            break;
        }
        sum+=arr[i];
    }
    cout<<sum<<"\n";
    return 0;
}
