
#include<bits/stdc++.h>
using namespace std;

int main()

{
    int test; cin>>test;

    while(test--)
    {
        int n; cin>>n;

        string s; cin>>s;

        int a = 0, b = 0;

        if(s[0] == 'A') a = 1;

        for(int i=0; i<n; i++)
        {
            if(s[i] == 'A' && s[i+1] == 'A')
            {
                a++;
            }


            if(s[i] == 'B' && s[i+1] == 'B')
            {
                b++;
            }

        }

        cout<<a<<" "<<b<<"\n";
    }
    return 0;
}
