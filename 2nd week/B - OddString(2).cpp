//Problem link: https://atcoder.jp/contests/abc072/tasks/abc072_b?lang=en
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s; cin>>s;

    for(int i=0; i<s.size(); i+=2)
    {
        cout<<s[i];
    }
    return 0;
}
