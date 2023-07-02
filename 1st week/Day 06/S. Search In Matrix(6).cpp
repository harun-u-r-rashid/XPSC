//Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/S
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c;
    cin>>r>>c;

    int matrix[r][c];

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cin>>matrix[i][j];
        }
    }
    int x;
    cin>>x;
    int flag = 0;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            if(matrix[i][j] == x)
            {
                flag = 1;
                break;
            }
        }
    }
    if(flag == 1)
    {
        cout<<"will not take number"<<"\n";
    }
    else
    {
        cout<<"will take number"<<"\n";
    }

    return 0;
}
