#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n, flag=0;
        cin>>n;
        string s1,s2;
        cin>>s1;
        cin>>s2;

        for(int i=0; i<n; i++)
        {
            if(s1[i] != s2[i] && (s1[i] == 'R' || s2[i] == 'R'))
            {
                flag = 1;
                break;
            }
        }
        if(flag)
        {
            cout<<"NO"<<"\n";
        }
        else
        {
            cout<<"YES"<<"\n";
        }
    }
    return 0;
}
