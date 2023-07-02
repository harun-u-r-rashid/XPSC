//Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/M
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int A,B;
    cin>>A>>B;
    int cnt = 0;
    for(int i=A; i<=B; i++)
    {
        int lucky_number = 0, x=i;
        while(x)
        {
            if(x%10 != 4 && x%10 !=7)

                lucky_number++;

            x/=10;
        }
        if(lucky_number == 0)
        {
            cout<<i<<" ";
            cnt++;
        }
    }
    if(cnt == 0) cout<<-1<<endl;

    return 0;
}


