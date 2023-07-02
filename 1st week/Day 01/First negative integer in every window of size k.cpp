/*

//Problem Link: https://practice.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int N; cin>>N;
    vector<long long int>Arr(N);
    for(int i=0; i<N; i++)
    {
        cin>>Arr[i];
    }
    long long int K; cin>>K;
    long long int i=0, j=0;
    queue<int>q;
    while(j<N)
    {
        if(Arr[j]<0) q.push(Arr[j]);
        if(j<K-1){
            j++;
        }
        else
        {
            if(q.empty()) cout<<0<<" ";
            else cout<<q.front()<<" ";
            if(Arr[i]<0){
                q.pop();
             }
                i++;
                j++;

        }
    }
    return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;

vector<long long > printFirstNegativeInteger(long long int Arr[], long long int N, long long int K)
{
    long long int i = 0, j= 0;
    queue<long long int> q;
    vector<long long int> ans;

    while (j < N)
    {
        if (Arr[j] < 0)
        {
            q.push(Arr[j]);
        }
        if (j< K - 1)
        {
            j++;
        }
        else
        {
            if(q.empty())
            {
                ans.push_back(0);
            }
            else
            {
                ans.push_back(q.front());
            }
            if(Arr[i] < 0)
            {
                q.pop();
            }
          i++;
           j++;
        }
    }
    return ans;
}
int main()
{
    long long int N;
    cin>>N;
    vector<long long int>Arr(N);
    for(int i=0; i<N; i++)
    {
        cin>>Arr[i];
    }
    long long int K;
    cin>>K;

    vector<long long> ans = printFirstNegativeInteger(Arr.data(),N,K);
    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}


