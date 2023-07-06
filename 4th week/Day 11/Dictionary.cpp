//Problem link: https://codeforces.com/contest/1674/problem/B

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


        int x = s[0]-'a';

        int y = s[1]-'a';

        //cout<<x<<" "<<y<<endl;

        int ans;

        if(x>y)

        ans = x*25+y+1;

        else

            ans = x*25+y;

        cout<<ans<<endl;
    }

    return 0;
}
