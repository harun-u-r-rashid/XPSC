#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int x=0,y=0;
       int flag = 0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='U')y++;
            if(s[i]=='D')y--;
            if(s[i]=='R')x++;
            if(s[i]=='L')x--;
            if(x==1 and y==1)
            {
                flag = 1;
            }
        }
        if(flag)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

