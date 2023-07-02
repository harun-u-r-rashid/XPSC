//problem link: https://practice.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/1

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string text, pattern;
    cin>>text>>pattern;

    int k = pattern.size(), i=0, j=0;
    int frequency1[26] = {0};
    int frequency2[26] = {0};
    int ans = 0;
    for(char c : pattern)
    {
        frequency1[c-'a']++;
    }
    while (j<text.size())
    {
        frequency2[text[j]-'a']++;
        if(j<k-1)
        {
            j++;
        }
        else
        {
            bool flag = true;

            for(int v=0; v<26; v++)
            {
                if(frequency1[v] != frequency2[v])
                {
                    flag = false;
                    break;
                }
            }
            if(flag) ans++;
            frequency2[text[i] - 'a']--;
            i++;
            j++;
        }

    }
     cout<<ans<<"\n";
    return 0;
}
