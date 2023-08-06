
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test; cin >> test;

    while(test--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        if(s.size() != 5)
        {
            cout<<"NO"<<"\n";
            continue;
        }

        sort(s.begin(), s.end());

        if(s == "Timru") cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";

    }
    return 0;
}
