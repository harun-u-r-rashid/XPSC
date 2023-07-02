//Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/G
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;

    for(int i=1; i<=test; i++)
    {
        int a;
        cin>>a;
        long long int factorial = 1;
        for(int i=1; i<=a; i++)
        {
            factorial *= i;
        }
        cout<<factorial<<"\n";
    }

    return 0;
}
