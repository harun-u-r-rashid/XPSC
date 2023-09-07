
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m ;
        cin >> n >> m;


        if(n>m) cout << "NO" << "\n";

        else if(n%2 == 0  && m%2==1) cout << "NO" << "\n";

        else if(n%2 == 0 && m%2 == 0)
        {
            int s = m;

            cout << "YES" << "\n";

            for(int i =0; i<n-2; i++)
            {
                cout << 1 << " ";
                s--;
            }
            cout << s/2 << " ";
            cout << s/2 << "\n";
        }

        else if(n%2 && m%2)
        {
            int s = m;

            cout << "YES" << "\n";

            for(int i=0; i<n-1; i++)
            {
                cout << 1 << " ";
                s--;
            }
            cout << s << "\n";
        }

        else if(n%2 && m%2==0)
        {
            int s = m;

            cout << "YES" << "\n";

            for(int i=0; i<n-1; i++)
            {
                cout << 1 << " ";
                s--;
            }

            cout << s << "\n";

        }

    }

    return 0;
}
