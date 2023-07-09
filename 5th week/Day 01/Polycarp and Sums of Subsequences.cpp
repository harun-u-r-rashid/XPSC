#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test; cin>>test;

    while(test--)
    {

        int arr[8];

        for(int i=0; i<7; i++)
        {
            cin>>arr[i];
        }

        if(arr[0]+arr[1]+arr[2] == arr[6])
        {
            cout<<arr[6]-arr[5]<<" "<<arr[6]-arr[4]<<" "<<arr[6]-arr[3]<<"\n";
        }

        else
        {
            cout<<arr[6]-arr[5]<<" "<<arr[6]-arr[4]<<" "<<arr[6]-arr[2]<<"\n";
        }

    }

    return 0;
}
