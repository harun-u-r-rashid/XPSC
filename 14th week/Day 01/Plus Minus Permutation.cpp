
 
#include <bits/stdc++.h>
using namespace std;
#define int long long

int gcd(int  a, int  b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int lcm(int a, int b)
{
    int ans = a / gcd(a,b);
    int ans1 = ans * b;

    return ans1;

}


 main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,x,y;   cin>>n>>x>>y;

        int l = lcm(x,y);

        int a = (n/x)-(n/l);

        int b = (n/y)-(n/l);

        int value2 = (b*(b+1))/2;

        int value1 = (n*(n+1))/2-((n-a)*(n-a+1))/2;

        int final_ans = value1-value2;

        cout<< final_ans <<endl;
    }
}
