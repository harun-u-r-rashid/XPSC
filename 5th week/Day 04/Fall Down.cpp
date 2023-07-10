//Problem link: https://codeforces.com/contest/1669/problem/G


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test; cin>>test;

    while(test--)
    {
        int n,m; cin>>n>>m;

        char grid[n][m];

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin>>grid[i][j];
            }
        }

        for(int j=0; j<m; j++)
        {
            for(int i=n-2; i>=0; i--)
            {
                if(grid[i][j] == '*')
                {
                    int k=i+1;

                    while(k<n && grid[k][j] == '.')
                        k++;
                    swap(grid[k-1][j], grid[i][j]);
                }
            }
        }


        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cout<<grid[i][j];
            }
            cout<<"\n";
        }

    }

    return 0;
}
