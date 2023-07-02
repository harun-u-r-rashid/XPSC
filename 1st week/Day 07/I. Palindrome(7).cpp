//Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/I
/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s; cin>>s;
    string ans = s;
    reverse(s.begin(), s.end());
    if (s == ans) cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";
    return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;

string isPalindrome(string S)
{
    for(int i=0; i<S.length()/2; i++)
    {
        if(S[i] != S[S.length() - i - 1])
        {
            return "NO";
        }
    }
    return "YES";
}
int main()
{
    string S;
    cin>>S;

    cout<<isPalindrome(S);

    return 0;
}
