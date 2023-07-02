/*
//Problem Link:  https://practice.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
// int use na kore long use korte hobe tahole sob case accept hobe


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N; cin>>N;
    vector<int>Arr(N);
    for(int i=0; i<N; i++) cin>>Arr[i];

    int K; cin>>K;
    int i=0, j=0, mx = INT_MIN, sum = 0;

    while(j<N)
    {
        sum+=Arr[j];

        if(j<K-1)
        {
            j++;
        }
        else
        {
            mx = max(sum, mx);
            sum-= Arr[i];
            i++;
            j++;
        }

    }
cout<<mx<<"\n";
    return 0;
}
*/

/*
#include<bits/stdc++.h>
using namespace std;

long  max_Sum(int N, vector<int>&Arr, int K)
{
    long i=0, j=0, mx = INT_MIN, sum = 0;

    while(j<N)
    {

        sum+=Arr[j];
        if(j<K-1)
        {
            j++;
        }
        else
        {
            mx = max(sum, mx);
            sum-= Arr[i];
            i++;
            j++;
        }
    }
    return mx;
}
int main()
{
    long N;
    cin>>N;
    vector<int>Arr(N);
    for(long i=0; i<N; i++)
    {
        cin>>Arr[i];
    }
    long K;
    cin>>K;

    cout<<max_Sum(N, Arr, K)<<"\n";
    return 0;
}
*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N; cin>>N;
    vector<int>Arr(N);
    for(int i=0; i<N; i++)
    {
        cin>>Arr[i];
    }

    int K; cin>>K;

    int i=0, j=0, sum = 0, mx = INT_MIN;

   while(j<N)
   {
       sum+=Arr[j];
       if(j<K-1)
       {
           j++;
       }
       else
       {
           mx = max(sum, mx);
           sum-=Arr[i];
           i++;
           j++;
       }
   }

    cout<<mx<<endl;
    return 0;
}
