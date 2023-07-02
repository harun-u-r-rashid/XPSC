/*
//Division

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test; cin>>test;
    while(test--)
    {
         int rate; cin>>rate;

         if(rate<=1399)
         {
             cout<<"Division 4"<<"\n";
         }
         else if(rate>=1400 && rate<=1599)
         {
             cout<<"Division 3"<<"\n";
         }
         else if(rate>=1600 && rate<=1899)
         {
             cout<<"Division 2"<<"\n";
         }
         else if(rate>=1900)
         {
             cout<<"Division 1"<<"\n";
         }
    }
    return 0;

}
*/

//Lucky

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test; cin>>test;
    while(test--)
    {
        string s; cin>>s;
        int length = s.size();
        //cout<<length<<endl;
        int sum1 = 0, sum2 = 0;
        for(int i=0; i<length/2; i++)
        {
            sum1+=s[i];
        }
        for(int i=length/2; i<length; i++)
        {
            sum2+=s[i];
        }
        if(sum1 == sum2)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
