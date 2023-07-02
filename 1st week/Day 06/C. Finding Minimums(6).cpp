//Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/C
//I have to practice this one
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,K;
    cin >>N>>K;

    vector<int>Arr(N);
    for(int i=0; i<N; i++)
    {
        cin >> Arr[i];
    }

    int i = 0, j=0, mn = Arr[0];
    int L = K;
    while (j < N)
    {
        if(Arr[j] < mn)
        {
            mn = Arr[j];
        }
        if(j < L-1 && j != N-1)
        {
            j++;
        }
        else
        {
            cout << mn << " ";
            mn = Arr[j+1];
            i = j+1;
            j++;
            L = L+K;
        }
    }
    return 0;
}

