/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int A,B,T; cin>>A>>B>>T;
    int ans = 0;
    for(int i=1; i<=T; i++)
    {
        if(i%A == 0)
        {
            ans+=B;
        }
    }

    cout<<ans<<endl;
    return 0;
}

*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int A,B,C; cin>>A>>B>>C;

    int D = C/A;
    int ans = D*B;
    cout<<ans<<"\n";

return 0;
}
