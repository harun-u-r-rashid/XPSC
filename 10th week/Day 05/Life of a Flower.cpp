/*

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n ;
        cin>>n;

        vector<int>a(n);

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }


        int sum = 1;




        for(int i=0; i<n; i++)

        {
            if(a[i] == 1)
            {
                if(i > 0 && a[i-1] == 1)
                    sum += 5;
                else sum++;
            }

            else
            {
                if(i > 0 && a[i-1] == 0)
                {
                    sum = -1;
                    break;
                }

            }
        }

        cout<<sum<<"\n";


    }
    return 0;
}

*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin>>n;

        vector<int>a(n);

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        int sum = 1;

        for(int i=0; i<n; i++)
        {
            if(a[i] == 1)
            {
                if(a[i+1] == 1 && i<n-1)
                    sum += 5;
                else sum++;
            }

            else
            {
                if(a[i+1] == 0 && i<n-1)
                {
                    sum = -1;
                    break;
                }
            }
        }

        cout<<sum<<"\n";
    }

    return 0;
}
