#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,c;
        cin>>a>>b>>c;
        if(c%2)
        a++;
        a+=c/2;
        b+=c/2;
        if(b<a)
        cout<<"First"<<"\n";
        else
        cout<<"Second"<<"\n";
    }
    return 0;
}
