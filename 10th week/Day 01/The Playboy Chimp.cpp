

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int>a(n);

    for(int i = 0; i<n; i++) cin>>a[i];

    int q;
    cin>>q;


    while(q--)
    {

        int x;
        cin>>x;



        int index1=0;
        int index2=0;
        auto it1 = lower_bound(a.begin(), a.end(),x);
        auto it2 = upper_bound(a.begin(), a.end(),x);

        index1 = it1 - a.begin();

        index2 = it2 - a.begin();


        if(index1 == 0) cout<<"X ";
        else cout<<a[index1-1]<<" ";

        if(index2 == n) cout<<"X"<<"\n";
        else cout<<a[index2]<<"\n";


    }

return 0;
}
