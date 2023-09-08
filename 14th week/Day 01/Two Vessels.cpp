
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a,b,c;
        cin>> a>>b>>c;


        if(a==b) cout << 0 << "\n";

        else
        {

           int ans = ((abs(a-b)+1)/2 + c-1);
           ans/=c;
           cout << ans << "\n";
        }

    }

    return 0;
}
