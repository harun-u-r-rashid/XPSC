#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;

    vector<int>a(n);
    vector<int>v(m);

    vector<int>c(n+m);


    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        c[i] = a[i];


    }


    for(int i=0; i<m; i++)
    {
        cin >> v[i];
        c[n+i] = v[i];
    }

    sort(c.begin(), c.end());


    for(auto it:c)
        cout << it <<" ";
    cout << "\n";



    return 0;
}
