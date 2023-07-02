int longestSubarrayWithSumK(vector<int> a, long long k)
{
    int length = a.size();
    int i=0, j=0;
    long long sum = 0;
    int ans = 0;

    while(j<length)
    {
        sum+=a[j];
        if(sum>k)
        {
            while(sum>k)
            {
                sum-=a[i];
                i++;
            }
        }
        if(sum==k)
        {
            ans = max(ans,j-i+1);
        }
        j++;

    }
    return ans;
}
