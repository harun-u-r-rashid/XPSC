//Problem link: https://codeforces.com/contest/1611/problem/A


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;

    while(test--)
    {
        string s;
        cin>>s;


        if(s[s.size()-1]%2==0)
        {
            cout<<0<<"\n";
            continue;
        }



        if(s[0]%2==0)
        {
            cout<<1<<"\n";
            continue;
        }


        int flag = 0;


        for(int i=0; i<s.size(); i++)
        {
            int x = s[i]-'0';

            if(x%2==0)
            {
                flag = 1;
                continue;
            }
        }

        if(flag) cout<<2<<"\n";
        else cout<<-1<<"\n";

    }

    return 0;
}
