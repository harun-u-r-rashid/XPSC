
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test; cin>>test;

    while(test--)
    {
        int n; cin>>n;
        int cnt = 0;

        while(n!=50)
        {
            if(n>50)
            {
                n = n-3;
                cnt++;
            }
            else
            {
                n = n+2;
                cnt++;
            }
        }

        cout<<cnt<<"\n";
    }
    return 0;
}
