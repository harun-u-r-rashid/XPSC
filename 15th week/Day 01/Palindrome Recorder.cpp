
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    map<char,int>mp;

    for(int i=0; i<s.size(); i++)
    {
        mp[s[i]]++;

    }

    int odd_cnt = 0;

    for(auto it:mp)
    {
        if(it.second%2)
            odd_cnt++;
    }

    if(odd_cnt>1)
    {
        cout << "NO SOLUTION\n";
    }

    else
    {
        string ss = "";
        string sss = "";

        for(auto it:mp)
        {
            if(it.second%2==0)
            {
                char ch = it.first;

                for(int i = 0; i<it.second/2; i++)
                {
                    ss+=ch;
                    sss+=ch;

                }

            }
        }

        for(auto it:mp)
        {
            if(it.second%2)
            {
                char ch = it.first;

                for(int i=0; i<it.second; i++)
                {
                    ss+=ch;
                }
            }

        }

        reverse(sss.begin(),sss.end());

        cout << ss+sss << "\n";
    }


    return 0;
}
