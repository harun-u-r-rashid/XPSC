#include<bits/stdc++.h>

using namespace std;

int main()
{


    string s1="ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
    string s2="A   3  HIL JM O   2TUVWXY51SE Z  8 ";

    map<char,char>mp;

    for(int i=0; i<s1.size(); i++)
        mp[s1[i]]=s2[i];


    string s;


    while(cin>>s)
    {
        int palindrome = 1, mirrored=1;

        int n=s.size();

        int a = n/2;

        for(int i=0; i<=a; i++)
        {
            if(s[i]!=s[n-1-i]) palindrome=0;
            if(s[n-1-i]!=mp[s[i]]) mirrored=0;
        }

        if(palindrome && mirrored) cout<<s<<" -- is a mirrored palindrome.\n\n";
        else if(palindrome && !mirrored) cout<<s<<" -- is a regular palindrome.\n\n";
        else if(!palindrome && mirrored) cout<<s<<" -- is a mirrored string.\n\n";
        else cout<<s<<" -- is not a palindrome.\n\n";


    }

    return 0;
}
