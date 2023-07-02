//Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/Q

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int flag = 0;
    while(cin>>s)
    {
        reverse(s.begin(), s.end());
        if(flag)
        {
            cout<<" ";
        }
        flag = 1;
        cout<<s;
    }
    return 0;
}
