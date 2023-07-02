//Pronlem link: https://atcoder.jp/contests/abc199/tasks/abc199_a?lang=en
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int A,B,C; cin>>A>>B>>C;

    int D = (A*A) + (B*B);
    int E = C*C;
    if(D<E)
    {
        cout<<"Yes"<<"\n";
    }
    else //if(D>E || D == E)
    {
        cout<<"No"<<"\n";
    }
    return 0;
}
