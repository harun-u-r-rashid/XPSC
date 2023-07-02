
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int>ans;
    for(int i=2; i<=n; i++)
    {
        bool flag = true;
        for(int j=2; j*j<=i; j++)
        {
            if(i%j == 0)
            {
                flag = false ;
                break;
            }

        }
        if(flag)
            ans.push_back(i);

    }
    for(int k=0; k<ans.size(); k++)
    {
        cout<<ans[k]<<" ";
    }

    return 0;
}



