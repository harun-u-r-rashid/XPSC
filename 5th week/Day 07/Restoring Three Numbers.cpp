//Problem link: https://codeforces.com/contest/1154/problem/A


#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>arr(4);

    for(int i=0; i<4; i++)
        cin>>arr[i];

    sort(arr.begin(), arr.end());

    cout<<arr[3]-arr[0]<<" "<<arr[3]-arr[1]<<" "<<arr[3]-arr[2]<<"\n";

    return 0;
}
