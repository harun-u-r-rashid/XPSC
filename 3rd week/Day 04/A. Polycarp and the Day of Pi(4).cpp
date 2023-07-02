//Problem link: https://codeforces.com/contest/1790/problem/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test; cin>>test;

    while(test--)
    {
        string s1 = "314159265358979323846264338327";
        string s2; cin>>s2;
        int cnt = 0;
       for(int i=0; i<s2.size(); i++)
       {
           if(s1[i] == s2[i])
           {
               cnt++;
           }
           else
           {
               break;
           }
       }

        cout<<cnt<<"\n";
    }
    return 0;
}

