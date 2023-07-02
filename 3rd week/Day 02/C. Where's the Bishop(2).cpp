//Problem link: https://codeforces.com/contest/1692/problem/C
//Abar bujte hobe

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test; cin>>test;
    while(test--)
    {
         string s[9];
         for(int i=0; i<8; i++)
         {
            cin>>s[i];
         }

         int x, y;

         for(int i=1; i<7; i++)
         {
             for(int j=1; j<7; j++)
             {
                 if(s[i-1][j+1] == '#' && s[i-1][j-1]=='#' && s[i+1][j+1] == '#' && s[i+1][j-1] == '#')
                 {
                     x = i+1;
                     y = j+1;
                 }
             }
         }
         cout<<x<<" "<<y<<"\n";
    }

    return 0;
}
