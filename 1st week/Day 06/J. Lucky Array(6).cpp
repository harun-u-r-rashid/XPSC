
//Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/J
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int>Arr(N);
    for(int i = 0; i < N; i++)
    {
        cin >> Arr[i];
    }

    int mn = Arr[0];
    int frequency = 1;
    for(int i=1; i<N; i++)
    {
        if(mn == Arr[i])
        {
            frequency++;
        }
        if(Arr[i] < mn)
        {
            mn = Arr[i];
           frequency = 1;
        }
    }

    if(frequency % 2 == 1)
    {
        cout << "Lucky";
    }
    else
    {
        cout << "Unlucky";
    }

    return 0;
}
s
