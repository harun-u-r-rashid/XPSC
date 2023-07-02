//Problem link: https://codeforces.com/problemset/problem/633/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int cnt = 0;
    for(int i=0; i<=c; i++)
    {
        for(int j=0; j<=c; j++)
        {
            if(((a*i)+(b*j)) == c)
            {
                cnt++;

            }
        }
    }
    if(cnt != 0) cout<<"Yes"<<"\n";
    else cout<<"No"<<"\n";
    return 0;
}




/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int A,B,C;
    cin>>A>>B>>C;
    int done = false;

    for(int i = 0; i<=C/A; i++)
    {
        if((C-A*i)%B == 0)
        {
            done = true;
            break;
        }
    }
    if(done == true)

        cout<<"Yes"<<"\n";
    else
        cout<<"No"<<"\n";

}

*/



