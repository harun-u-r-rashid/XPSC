//Problem link: https://practice.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K)
    {
        int sum = 0, ans = 0;

        unordered_map<int,int>mp;
        for(int i=0; i<N; i++)
        {
            sum+=A[i];
            if(sum == K)
            {
                ans = max(ans, i+1);
            }

            if(mp.find(sum-K) != mp.end())
            {
                int index = mp[sum-K];
                ans = max(ans, i-index);
            }
            if(mp.find(sum) == mp.end())
            {
                mp[sum] = i;
            }
        }
        return ans;
    }

};


int main() {


	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];

	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;

	}

	return 0;
}
