//Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/I
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int original_number = n;
    int reverse_number = 0;

    while(n > 0)
    {
        int temp = n%10;
        reverse_number = (10*reverse_number) + temp;
        n /= 10;
    }
    cout<<reverse_number<<endl;
    if(original_number == reverse_number)
    {
        cout<<"YES"<<"\n";
    }
    else
        cout<<"NO"<<"\n";
return 0;
}
