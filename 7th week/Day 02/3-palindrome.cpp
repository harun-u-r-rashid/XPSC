
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;

    for(int i=0; i<n/4; i++)
    {
        s+="aabb";
    }



    if(n%4==1)
    {
        s+="a";
    }
    if(n%4 == 2)
    {
        s+="aa";
    }
    if(n%4 == 3)
   {
    s+="aab";
}

cout<<s<<"\n";


return 0;
}


