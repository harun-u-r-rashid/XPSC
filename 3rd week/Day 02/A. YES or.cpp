/*

//Problem link: https://codeforces.com/contest/1703/problem/A
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test; cin>>test;

    while(test--)
    {
        string s; cin>>s;

        int cnt = 0;

        if(s[0] == 'Y' || s[0] =='y')
        {
            cnt++;
        }
        if(s[1] == 'E' || s[1] == 'e')
        {

    cnt++;
        }
        if(s[2] == 'S' || s[2] == 's')
        {
            cnt++;
        }
        if(cnt == 3)
            cout<<"YES"<<"\n";
        else
            cout<<"NO"<<"\n";
    }
    return 0;
}
*/

#include<stdio.h>

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b= temp;

    printf("%d %d",a,b);
}
int main()
{
    int a,b;
    printf("Enter two integers: ")
    scanf("%d%d",&a,&b);

    swap(a,b);

    return 0;
}
