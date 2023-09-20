
#include<bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    cin >> s;

    sort(s.begin(), s.end());


    int ans = 1;

    vector<string>v;

    while(next_permutation(s.begin(), s.end()))
    {
       v.push_back(s);

    }

    cout << v.size() + 1 << "\n";
    cout << s << "\n";

    for(int i = 0; i<v.size(); i++)
    {
        cout << v[i] << "\n";

    }
    return 0;
}
