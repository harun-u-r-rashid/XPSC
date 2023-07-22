
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;

    while(test--)
    {
        int n;
        cin>>n;

        string s;
        cin>>s;
        int zero = 0, one = 0;
        for(int i=0; i<n; i++)
        {
            if(s[i] == '0')
            {
                zero++;
            }
            else
            {
                one++;
            }
        }

        int ans = min(zero,one);

        if(ans%2==0)
        {
            cout<<"Ramos"<<"\n";
        }
        else
        {
            cout<<"Zlatan"<<"\n";
        }
    }

    return 0;
}
