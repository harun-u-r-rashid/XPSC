
#include<bits/stdc++.h>
using namespace std;

int main()
{

    long long t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        long long l = s.length();
        s='0'+s;
        reverse(s.begin(), s.end());
        long long k=0;
        for(long long i=0; i<l; i++)
        {
            if(s[i]>='5')
            {
                s[i+1]++;
                for(long long j=i; j>=k; j--)
                {
                    s[j]='0';
                }
                k=i;
            }
        }

        reverse(s.begin(), s.end());


        if(s[0]=='0')
        {
            for(long long i=1; i<=l; i++)
            {
                cout<<s[i];

            }
            cout<<endl;
        }
        else
        {
            for(long long i=0; i<=l; i++)
            {
                cout<<s[i];
            }
            cout<<endl;
        }

    }

    return 0;
}





