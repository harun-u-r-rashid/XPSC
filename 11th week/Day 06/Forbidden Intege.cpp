/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k,x;
        cin >> n >> k >> x;

        if(k==1) cout << "NO" << "\n";

        else
        {
            if(x != 1)
            {
                cout << "YES" << "\n";
                cout << n << "\n";
                for(int i=1; i<=n; i++)
                    cout << 1 << " ";

                cout << "\n";
            }

            else
            {
                if(n%2 == 0)
                {
                    cout << "YES" << "\n";
                    cout << n/2 << "\n";

                    for(int i = 1; i <= n/2; i++)
                    {
                        cout << 2 << " ";
                    }

                    cout << "\n";
                }

                else
                {
                    if(k == 2) cout << "NO" << "\n";

                    else
                    {
                        cout << "YES" << "\n";
                        int ans = ((n-3)/2)+1;
                        cout << ans << "\n";
                        cout << 3 << "\n";

                        for(int i = 1; i < ans - 1; i++)
                        {
                            cout << 2 << " ";
                        }


                        cout << "\n";
                    }
                }
            }
        }

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
        int n,k,x;
        cin >> n >> k >> x;

        if(k == 1)
            cout << "NO" << "\n";

        else

        {
            if(x != 1)
            {
                cout << "YES" << "\n";

                cout << n << "\n";

                for(int i = 0; i < n; i++)
                    cout << 1 << " ";
                cout << "\n";
            }

            else

            {
                if(n % 2 == 0)
                {
                    cout << "YES" << "\n";
                    cout << n / 2 << "\n";

                    for(int i = 1; i <= n / 2; i++)
                        cout << 2 << " ";

                    cout << "\n";
                }

                else
                {
                    if (k == 2) cout << "NO" << "\n";

                    else
                    {
                        cout << "YES" << "\n";
                        int ans = ((n-3)/2) + 1;
                        cout << ans << "\n";
                        cout << 3 << " ";

                        for(int i = 1; i <= ans - 1; i++ )
                            cout << 2 << " ";

                        cout << "\n";
                    }
                }
            }
        }
    }

    return 0;
}
