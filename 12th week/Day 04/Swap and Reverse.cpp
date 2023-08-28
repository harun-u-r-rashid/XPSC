
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        long long n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        if (k % 2)
        {
            string ans;

            map<char, array<int, 2>> mp;

            for (long long i = 0; i < n; i++)
            {
                mp[s[i]][(i % 2)]++;
            }


            for (long long i = 0; i < n; i++)
            {
                for (char ch = 'a'; ch <= 'z'; ch++)
                {
                    if (mp[ch][(i % 2)] > 0)
                    {
                        mp[ch][(i % 2)]--;
                        ans += ch;
                        break;
                    }
                }
            }

            cout << ans << "\n";
        }

        else
        {
            sort(s.begin(), s.end());
            cout << s << "\n";
        }
    }

    return 0;
}

 
