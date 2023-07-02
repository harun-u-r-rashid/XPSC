/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;

    vector<int>arr(N);
    for(int i=0; i<N; i++)
    {
        cin>>arr[i];
    }
    sort(arr.begin(), arr.end());
    int temp = 0;
    int result = 0;
    int cnt = 0;
    for(int i =0; i<N; i++)
    {

        if(i == 0)
        {
            temp = arr[i];
            result = 1;
        }
        else
        {
            if(temp == arr[i])
            {
                result++;
            }
            else if (temp+1 == arr[i])
            {
                cnt += result;
                temp = arr[i];
                result = 1;
            }
            else
            {
                result = 1;
                temp = arr[i];
            }
        }
    }
    cout<<cnt<<endl;

}

*/

//Another approach
//0 1 2 3 3 5
//1 1 1 1 2
#include<bits/stdc++.h>
using namespace std;

int counting_elements(int N, vector<int>&Arr)
{
    if(N<=1) return 0;

    sort(Arr.begin(), Arr.end());

    int left = 0, right = 1, cnt = 0;

    while(right<N)
    {
        if(Arr[right] == 1+Arr[left])
        {
            cnt+=(right-left);
            left = right;
            right++;
        }
        else if(Arr[right] == Arr[left])
        {
            right++;
        }
        else //
        {
            left = right;
            right++;
        }
    }
    return cnt;
}
int main()
{


    int N; cin>>N;

    vector<int>Arr(N);
    for(int i=0; i<N; i++)
    {
        cin>>Arr[i];
    }

    cout<<counting_elements(N, Arr)<<"\n";
  return 0;
}
