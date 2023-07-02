
#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    int i=0, j=0;
    int n = s.size(), ans = -1, unique = 0;

    int frequency[26] = {0};

    while(j<n)
    {
        char ch = s[j];
        if(frequency[ch-'a'] == 0) unique++;
        frequency[ch-'a']++;


            if(unique>k)
            {
                while(unique>k)
                {
                char left_ch = s[i];
                frequency[left_ch - 'a']--;

                if(frequency[left_ch-'a'] == 0) unique--;
                i++;
                }
            }

        if(unique == k)
        {
            ans = max(ans, j-i+1);
        }
        j++;
    }
    return ans;
    }
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

