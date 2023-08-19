
#include<bits/stdc++.h>
using namespace std;


//int count(int n)
//{
//    int cnt = 0;
//
//    while(n)
//    {
//        cnt += (n & 1);
//
//        n >>= 1;
//    }
//
//    return cnt;
//}

int main()
{

    int n, m, k;
    cin >> n >> m >> k;

    int a[m + 1];

    int ans = 0;

    for(int i = 0; i <= m; i++) cin>>a[i];


    for(int i=0; i<m; i++)
    {
        int x = (a[i]^a[m]);


        if(__builtin_popcount(x)<= k)
            ans++;
    }

    cout<<ans<<"\n";

    return 0;
}
