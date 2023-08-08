
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,a,b;

        cin>>n>>a>>b;

        int first_half = n/2;
        int second_half = (n/2)+1;

        if(a>second_half || b<first_half)
        {
            cout<<-1<<"\n";

        }

        else if((a==second_half && b != first_half) || (b == first_half && a != second_half))
        {
            cout<<-1<<"\n";
        }

        else
        {

            cout<<a<<" ";

            for(int i=second_half; i<=n; i++)
            {
                if(i==b || i==a) continue;
                cout<<i<<" ";
            }


            cout<<b<<" ";

            for(int i = 1; i<=first_half; i++)
            {
                if(i==b || i==a) continue;
                cout<<i<<" ";

            }


            cout<<"\n";
        }

    }

    return 0;
}
