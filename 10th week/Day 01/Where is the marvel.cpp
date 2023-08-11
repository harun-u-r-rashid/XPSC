/*

//By lower_bound


#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,q;
    int cs = 1;

    while(cin>>n>>q)
    {

        if(n == 0 && q == 0) break;

        cout<<"CASE# "<<cs<<":"<<"\n";

        cs++;

        vector<int>a(n);

        for(int i=0; i<n; i++) cin>>a[i];

        sort(a.begin(), a.end());

        while(q--)
        {
            int x;
            cin>>x;

            auto it = lower_bound(a.begin(), a.end(), x);

            int index = it  - a.begin();

            int ans;

            if(index == n) ans = -1;

            else if(a[index] != x ) ans = -1;

            else ans = index + 1;

            if(ans == -1) cout<<x<<" not found"<<"\n";
            else cout<<x<<" found at "<<ans<<"\n";
        }
    }

    return 0;
}

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,q;
    int cs = 1;


    while(cin>>n>>q)
    {

       if(n == 0 && q == 0) break;

        cout<<"CASE# "<<cs<<":"<<"\n";

        cs++;

        vector<int>a(n);

        for(int i=0; i<n; i++) cin>>a[i];

        sort(a.begin(), a.end());

        while(q--)
        {
            int x;
            cin>>x;

            int ans = -1;

            int l = 0, r = n-1;

            while(l<=r)
            {
                int mid = l+(r-l)/2;

                if(a[mid] == x)
                {
                    ans = mid;
                    r = mid-1;
                }

                else if(x>a[mid]) l = mid+1;

                else r = mid - 1;

            }

            if(ans = -1) cout<<x<<" not found"<<"\n";
            else cout<<x<<" found at "<<ans+1<<"\n";

        }


    }

    return 0;
}


//4 1
//2
//3
//5
//1
//5
//5 2
//1
//3
//3
//3
//1
//2
//3
//0 0
