

#include<bits/stdc++.h>
using namespace std;

void solve(int n)
{
            if(n>9999999)
        {
            cout<<n/10000000<<" kuti"<<" ";
            n = n%10000000;
        }
        if(n>99999)
        {
            cout<<n/100000<<" lakh"<<" ";
            n = n%100000;
        }
        if(n>999)
        {
            cout<<n/1000<<" hajar"<<" ";
            n = n%1000;
        }
        if(n>99)
        {
             cout<<n/100<<" shata"<<" ";
            n = n%100;
        }
        if(n<100 && n>0)
        {
            cout<<n;
        }
}
int main()
{

      long long n;
      int i = 0;

    while(cin >> n)
    {
        cout<<i+1<<"."<<" ";
        i++;

        if(n == 0)
        {
           cout<<" 0"<<" ";
            continue;
        }

        if(n>9999999)
        {
            solve(n/10000000);
            cout<<" kuti"<<" ";
            n = n % 10000000;
        }


        solve(n);

        cout<<"\n";
    }

    return 0;
}
