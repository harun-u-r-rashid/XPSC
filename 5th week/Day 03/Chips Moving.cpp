//Problem link: https://codeforces.com/contest/1213/problem/A


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;

    vector<int>arr(n);

    for(int i=0; i<n; i++) cin>>arr[i];

    int odd_position = 0, even_position = 0;

    for(int i=0; i<n; i++)
    {
        if(arr[i]%2) odd_position++;
        else even_position++;
    }

    if(odd_position == n || even_position == n) cout<<0<<"\n";
    else cout<<min(odd_position,even_position)<<"\n";


    return 0;
}
