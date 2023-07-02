//problem link: https://atcoder.jp/contests/abc220/tasks/abc220_a?lang=en
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A,B,C;
    cin>>A>>B>>C;
    bool flag = false;
    int ans;
    for(int i=A; i<=B; i++)
    {
        if(i%C == 0)
        {
            ans = i;
            flag  = true;
            break;
        }
    }
    if(flag == true) cout<<ans<<"\n";
    else cout<<-1<<"\n";
    return 0;
}
