
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;

    while(t--)
    {
        int n,a,b; cin>>n>>a>>b;

        int even = 0;

        int odd = 0;

        for(int i=1; i<=n; i++)
        {
            if(i%2==0)

                even++;

            else
                odd++;
        }

        cout<<b*odd+a*even<<"\n";

    }
    return 0;
}
