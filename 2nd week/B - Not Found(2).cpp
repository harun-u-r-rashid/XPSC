#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s; cin>>s;

    unordered_set<char>us;

    for(char c:s)
    {
        us.insert(c);
    }

    for(char ch = 'a'; ch<='z'; ch++)
    {
        if(us.find(ch) == us.end())
        {
            cout<< ch <<"\n";
            return 0;
        }
    }
    cout<<"None"<<"\n";

    return 0;
}
