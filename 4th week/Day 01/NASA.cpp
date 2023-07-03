
//Problem link: https://www.codechef.com/problems/PALIXOR?tab=submissions

#include<bits/stdc++.h>
using namespace std;


vector<long long>v;

void solve()
{
    long long n;
    cin>>n;
    long long a[n];
    long long freq[35000] = {0};

    for(long long i=0; i<n; i++)
    {
        cin>>a[i];
        freq[a[i]]++;
    }
    long long ans = 0;
    for(long long i=0; i<n; i++)
    {
        for(long long j=0; j<v.size(); j++)
        {
            long long k = a[i]^v[j];
            if(k>(1<<15))
            {
                continue;
            }

            long long x = freq[k];
            ans+=freq[k];

        }
    }
    cout<<(ans+n)/2<<"\n";
}

bool isPalindrome(long long value)
{
    string ans = to_string(value);
    string ans2 = ans;
    reverse(ans2.begin(),ans2.end());
    return ans == ans2;
}

int main()
{


    for(long long i=0; i<(1<<15); i++)
    {
        if(isPalindrome(i))
            v.push_back(i);
    }

    int test;
    cin>>test;

    while(test--)
    {
        solve();
    }
    return 0;
}



