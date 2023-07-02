#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin>>N;
    int original_number = N;
    int ans = 0;
    while(N>0)
    {
        ans++;
        //int rem = N%10;
        N = N/10;
    }
    if(ans == 4)
    {
        cout<<original_number<<"\n";
    }
    else if(ans == 3)
    {
        cout<<0<<original_number<<"\n";
    }
    else if(ans == 2)
    {
        cout<<0<<0<<original_number<<"\n";
    }
    else if(ans == 1)
    {
        cout<<0<<0<<0<<original_number<<"\n";
    }
    else if(ans == 0)
    {
        cout<<0<<0<<0<<0<<"\n";
    }
    return 0;
}
