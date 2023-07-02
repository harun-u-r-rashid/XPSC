

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long N,K;
    cin >> N >> K;

    int cnt = 1;

    for(long long i = 1; i <= N; i++)
    {
        if(N*2 <= K)
        {
            N = N*2;
            cnt++;
        }
        else
        {
            break;
        }
    }

    cout <<cnt<<"\n";
    return 0;
}

