//Problem link: https://codeforces.com/contest/1741/problem/A

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string a,b;
    cin>>a>>b;
    int x = a.size();
    int y = b.size();

    if(a[x-1]=='M' || b[y-1]=='M')
    {
        if(a[x-1]=='L')
        {
            cout<<">"<<"\n";
        }
        else if(b[y-1]=='L')
        {
            cout<<"<"<<"\n";
        }
        else if(a[x-1]=='S')
        {
            cout<<"<"<<"\n";
        }
        else if(b[y-1]=='S')
        {
            cout<<">"<<"\n";
        }
        else
        {
            cout<<"="<<"\n";
        }
    }
    else
    {
        if(a[x-1]=='S')
        {
            if(b[y-1]=='S')
            {
                if(x==y)
                {
                    cout<<"="<<"\n";
                }
                else if(x>y)
                {
                    cout<<"<"<<"\n";
                }
                else
                {
                    cout<<">"<<"\n";
                }
            }
            else
            {
                cout<<"<"<<"\n";
            }
        }
        else
        {
            if(b[y-1]=='S')
            {
                cout<<">"<<"\n";
            }
            else
            {
                if(x==y)
                {
                    cout<<"="<<"\n";
                }
                else if(x>y)
                {
                    cout<<">"<<"\n";
                }
                else
                {
                    cout<<"<"<<"\n";
                }
            }
        }
    }
}



int main()
{
    int test;
    cin>>test;

    while(test--)
    {
        solve();
    }
    return 0;
}



