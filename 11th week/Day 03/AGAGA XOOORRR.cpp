
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        vector<int>a(n);

        for(int i=0; i<n; i++)
            cin >> a[i];

        int x = 0;

        for(int i=0; i<n; i++)
            x^=a[i];




        if(x == 0)
            cout<<"YES"<<"\n";


        else

        {
            int y = 0, ans = 0;


            for(int i=0; i<n; i++)
            {
                y^=a[i];

                if(y == x)
                {
                    y = 0;
                    ans++;
                }
            }


            if(ans>=2)


                cout<<"YES1"<<"\n";
            else
                cout<<"NO"<<"\n";
        }
    }

    return 0;
}
