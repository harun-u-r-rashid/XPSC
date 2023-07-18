#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test; cin>>test;


    while(test--)
    {
        string s; cin>>s;


        int ans1 = (s[0]-'0')*10+(s[1]-'0');

        int ans2 = (s[3]-'0')*10+(s[4]-'0');

        if(ans1>12)
        {
            cout<<"DD/MM/YYYY"<<"\n";
        }

        else if(ans2>12)
        {
            cout<<"MM/DD/YYYY"<<"\n";
        }

        else

        {
            cout<<"BOTH"<<"\n";
        }
    }
}
