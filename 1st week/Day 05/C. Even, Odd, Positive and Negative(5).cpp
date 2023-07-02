//Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/C
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin>>N;

    int Arr[N];
    int Even = 0, Odd = 0, Positive = 0, Negative = 0;
    for(int i=0; i<N; i++)
    {
        cin>>Arr[i];
        if(Arr[i] == 0)
        {

        }
        else if(Arr[i] > 0)
            Positive++;

        else
            Negative++;

        if(Arr[i] == 0)
        {
            Even+=1;
        }
        else if(Arr[i] %2 == 0)
            Even++;
        else
            Odd++;
    }

    cout<<"Even: "<<Even<<"\n";
    cout<<"Odd: "<<Odd<<"\n";
    cout<<"Positive: "<<Positive<<"\n";
    cout<<"Negative: "<<Negative<<"\n";
    return 0;
}
