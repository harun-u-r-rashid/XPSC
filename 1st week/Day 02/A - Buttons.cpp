#include<bits/stdc++.h>
using namespace std;

int main()
{
    int A,B;
    cin>>A>>B;
    int ans;
    if(A>B)
    {

        ans = (2*A)-1;
    }
    else if(A<B)
    {
        ans = (2*B)-1;
    }
    else if(A==B)
    {
        ans = 2*A;
    }
    cout<<ans<<"\n";
    return 0;
}
