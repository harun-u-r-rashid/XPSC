
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;

        string ans;

        for(int i=s.size()-1; i>=0; i--)
            s+=s[i];

        cout<<s<<endl;

    }
    return 0;
}
