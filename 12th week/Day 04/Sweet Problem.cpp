
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int a, b, c ; cin >> a >> b >> c;

        int ans = (a + b + c)/2;

        int ab = a + b;
        int bc = b + c;
        int ac = a + c;

        cout << min({min(ans,ab), min(ans,bc), min(ans,ac)}) << "\n";


    }

    return 0;
}
