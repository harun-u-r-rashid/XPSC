#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;

        int nn = 2*n;

        int grid[2][n];


        int mx = nn;
        int mn = 1;

        grid[0][0] = mx--;
        grid[1][n-1]  = mx--;

        for(int i = 1; i<n; i++)
        {
            if(i%2 == 1)
            {
                grid[1][i-1] = mn++;
                grid[0][i] = mn++;
            }

            else
            {
                grid[0][i] = mx--;
                grid[1][i-1] = mx--;
            }
        }

        for(int i=0; i<2;  i++)
        {
            for(int j = 0; j<n; j++)
            {
                cout << grid[i][j] << " ";
            }

            cout << "\n";
        }
    }

    return 0;
}
