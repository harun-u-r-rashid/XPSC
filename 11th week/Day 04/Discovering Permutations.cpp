#include <math.h>
#include <iostream>
#include <sstream>
#include <cstdio>
#include <bitset>
#include <cstring>
#include <string>
#include <stdlib.h>
#include <algorithm>
using namespace std;

int main()
{

    int t;
    cin >> t;



    while(t--)
    {
        cout << "Case "<< t << ":"<< endl;
        int n,k;
        cin >> n >> k;
        char ch[27];

        cin >> n >> k;
        for(int i=0; i<n; i++)
            ch[i] ='A'+i;
        ch[i]=NULL;
        int x = 0;
        //char ch[27];
        do
        {
            for(int i=0; i<n; i++)printf("%c",ch[i]);
            cout << endl;
            x++;
        }
        while(next_permutation(ch,ch+n)&&x<k);

    }
    return 0;
}
