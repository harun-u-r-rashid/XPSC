/*
#include <iostream>

#include <vector>
using namespace std;

int main() {
    long long n;
    cin >> n;
    vector<long long> arr(n, 0);

    for (long long i = 0; i < n; i++) {
        long long num;
        cin >> num;
        arr[num - 1]++;
    }

    for (long long i = 0; i < n; i++) {
        if (arr[i] == 0) {
            cout << (i + 1) << endl;
            break;
        }
    }

    return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n; cin>>n;
   long long sum = 0;
    long long arr[n];
    for(long long i=0; i<n-1; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    long long ans = n*(n+1)/2;

    cout<<ans-sum<<endl;
    return 0;
}
