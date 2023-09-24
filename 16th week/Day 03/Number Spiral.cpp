
#include<bits/stdc++.h>
using namespace std;

#define int long long

 main()
{
    int t; cin >> t;

    while(t--)
    {
        int row,col; cin >> row >> col;

        if(row >= col)
        {
            if(row%2)
                cout << (row-1)*(row-1) + col << "\n";

            else

                cout << row*row - (col - 1) << "\n";

        }

        else
        {
            if(col%2)
                cout << col*col -  (row-1) << "\n";

            else
                cout << (col-1)*(col-1) + 1 + (row-1) << "\n";

        }

    }
    return 0;
}
