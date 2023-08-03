
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;



        if(n/19 == 0)
        {
            cout<<n<<"\n";
        }

        else
        {
            for(int i=1; i<=9; i++)
            {
                for(int j = i+1; i<=9; i++)
                {
                    if(i+j == n)
                    {
                        cout<<i<<j<<"\n";
                            continue;
                    }
                }
            }
        }




    }
    return 0;
}









