#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;

        vector<pair<int, int>> v;

        for (int i = 1; i <= n; ++i)
        {

            int x;
            cin >> x;

            x %= k;

            v.push_back({(x % k) == 0 ? k : (x % k), i });
        }

        sort(v.begin(), v.end(), [&](pair<int, int> x, pair<int, int> y)
        {
            if (x.first == y.first)
                return x.second < y.second;
            return x.first > y.first;
        });

        for (auto [x, y] : v)
        {
            cout << y << " ";
        }
        cout << '\n';
    }

    return 0;
}
