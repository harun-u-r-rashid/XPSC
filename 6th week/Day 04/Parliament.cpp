
#include <iostream>
using namespace std;

int main()
{
    // your code goes here

    int test;
    cin>>test;

    while(test--)

    {
        int n,x;
        cin>>n>>x;

        int ans;

        if(n%2==0)
            ans = n/2;

        else
            ans = (n/2)+1;


        if(x>=ans) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }


    return 0;
}
