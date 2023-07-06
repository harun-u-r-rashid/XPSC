//Problem link: https://codeforces.com/contest/1674/problem/C


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test--)
    {


        string s;
        string t;
        cin>>s;
        cin>>t;

        sort(t.begin(),t.end());

        if(t[0] == 'a' && t.size()>1) cout<<-1<<"\n";
        else if(t[0] == 'a' && t.size() == 1) cout<<1<<"\n";

        else
        {
            int ans = pow(2,s.size());;
            cout<<ans<<"\n";

        }


    }
    return 0;
}




