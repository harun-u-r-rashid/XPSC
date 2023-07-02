//Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/O

#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;
    int arr[26] = {0};
    for(int i=0; i<n; i++)
    {
        char c;
        cin>>c;
        arr[c-'a']++;
    }
    for(int i=0; i<=25; i++)
    {
        while(arr[i] != 0)
        {
            cout<<(char)(i+97);
            arr[i]--;
        }
    }
    return 0;

}
