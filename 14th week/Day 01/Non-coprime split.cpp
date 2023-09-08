#include<bits/stdc++.h>
using namespace std;

int is_prime(int n)
{
    while (n % 2 == 0)
    {
        return 2;
        n = n/2;
    }
    for (int i = 3; i*i<=n; i +=2)
    {
        while (n % i == 0)
        {
            return i;
            n = n/i;
        }
    }

    return n;
}

int main()
{


    int t;
    cin>>t;
    while(t--)
    {
       int l,r;
        cin>>l>>r;
        if(r <= 3)
        {
            cout<<-1<<endl;
        }
        else
        {
            if(l < r)
            {
                if(r%2)
                {
                    r--;
                }
                cout<<2<<" "<<r-2<<endl;
            }
            else
            {
               int prime = is_prime(l);
                if(prime == l)
                    cout<<-1<<endl;
                else
                    cout<<prime<<" "<<l-prime<<endl;
            }
        }
    }
    return 0;
}
