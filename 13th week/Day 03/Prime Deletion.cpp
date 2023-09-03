/*
#include<bits/stdc++.h>
using namespace std;

bool isprime(int n)
{

    for(int i=2; i*i<=n; i++)
    {
        if(n%i == 0)
            return false;
    }
    return true;

}


int main()
{
    int t; cin >> t;

    while(t--)
    {
        string s; cin >> s;


        int ans;

        for(int i=0; i<9; i++)
        {
            for(int j=i+1; j<9; j++)
            {
                int x = (s[i]-'0')*10+ (s[j] - '0');

                cout << x << "\n";


                if(isprime(x))
                {
                    ans = x;
                    break;
                }

            }
        }

        cout << ans << "\n";
    }

    return 0;
}
*/



#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
     string s; cin >> s;
        char ch;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] == '1' || s[i] == '7')
            {
                 ch = s[i];
                 break;
            }

        }

        if(ch == '1') cout << 17 << "\n";
        else cout << 71 << "\n";

    }
    return 0;
}
