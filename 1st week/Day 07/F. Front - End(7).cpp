#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n; // 6
	int arr[n];
	// 0 1 2 3 4 5
	// 1 2 3 4 5 6
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n/2;i++){
		// i = 0   arr[0]  arr[4]
		// i = 1   arr[1]  arr[3]
		// i = 2   arr[2]  arr[3]
		// n / 2 = 6 / 2 = 3   0 1 2
		cout<<arr[i]<<" "<<arr[n - i - 1]<<" ";
	}
	if(n % 2 != 0){
		cout<<arr[n / 2]; // 5 / 2 = 2.5  = 2
	}
}

