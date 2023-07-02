/*
//problem link: https://practice.geeksforgeeks.org/problems/deee0e8cf9910e7219f663c18d6d640ea0b87f87/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
class Solution
{

    vector<int>max_of_subarrays(vector<int>Arr, int N, int K)
    {
        vector<int> ans;
        multiset<int>ms;
        for(int i=0; i<K; i++)
            ms.insert(Arr[i]);
        auto it = ms.end();
        it--;
        ans.push_back(*it);

        for (int i=k; i<N; i++)
        {
            ms.erase(ms.find(Arr[i-k]));
            ms.insert(Arr[i]);
            it  =  ms.end();
            it--;
            ans.push_back(*it);
        }
        return ans;
    }
};

*/

/*
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
    int i=0, j=0;
    vector<int>ans;
    multiset<int>ms;
    while(j<N)
    {
        ms.insert(Arr[j]);

        if(j<K-1)
        {
            j++;
        }
        else
        {
              ans.push_back(*ms.rbegin());
            ms.erase(ms.find(Arr[i]));
           // ms.insert(Arr[i]);
            i++;
            j++;
        }
    }
    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}
*/



#include<bits/stdc++.h>
using namespace std;

vector<int>max_of_subarrays(vector<int>Arr, int N, int K)
{
    int i=0, j=0;
    vector<int>ans;
    multiset<int>ms;
    while(j<N)
    {
        ms.insert(Arr[j]);
        if(j<K-1)
        {
            j++;
        }
        else
        {
            ans.push_back(*ms.rbegin());
            ms.erase(ms.find(Arr[i]));
            i++;
            j++;
        }
    }
    return ans;
}
int main()
{
    int N; cin>>N;
    vector<int>Arr(N);
    for(int i=0; i<N; i++)
    {
        cin>>Arr[i];
    }
    int K; cin>>K;
  vector<int>result = max_of_subarrays(Arr, N, K);

  for(int i=0; i<result.size(); i++)
  {
      cout<<result[i]<<" ";
  }
    return 0;
}


