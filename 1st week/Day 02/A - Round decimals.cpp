/*
#include <iostream>
#include <cmath>

int main() {
    // Read the input
    double x;
    std::cin >> x;

    // Round x to the nearest integer
    int rounded = static_cast<int>(std::floor(x + 0.5));

    // Print the result
    std::cout << rounded << std::endl;

    return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    double X; cin>>X;

    int round_decimals = static_cast<int >(floor(X+0.5));
    cout<<round_decimals<<"\n";
    return 0;
}
