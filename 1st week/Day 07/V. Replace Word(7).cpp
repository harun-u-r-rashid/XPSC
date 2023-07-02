//Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/V
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s; cin>>s;
    int length = s.size();

    for(int i=0; i<length; i++)
    {
        if(s[i] == 'E' && s[i+1] == 'G' && s[i+2] == 'Y' && s[i+3] == 'P' && s[i+4] == 'T')
        {
            i+=4;
            cout<<" ";
        }
        else
            cout<<s[i];
    }
    return 0;
}
