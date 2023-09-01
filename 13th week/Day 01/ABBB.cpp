#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;

      vector<char>v;

      for(int i=0; i<s.size(); i++)
      {
          if(s[i] == 'A' || v.empty())
            v.push_back(s[i]);
          else
            v.pop_back();
      }
      cout << v.size() << "\n";

    }
    return 0;
}
