//Problem link: https://codeforces.com/contest/1840/problem/A
#include<bits/stdc++.h>
using namespace std;

vector<char> solve(int K, string S)
{
    vector<char>Final;
    queue<char>q;

    for(int j=0; j<K; j++)
    {
        if(q.empty())
        {
            q.push(S[j]);
        }
        else
        {
            if(q.front() == S[j])
            {
                Final.push_back(q.front());
                q.pop();
            }
        }
    }
    return Final;
}

void print(const vector<char>&ch)
{
    for(int m = 0; m<ch.size(); m++)
    {
        cout<<ch[m];
    }
    cout<<"\n";
}
int main()
{
    int N; cin>>N;
    for(int i=0; i<N; i++)
    {
        int K; cin>>K;

        string S; cin>>S;

        vector<char>result = solve(K,S);
        print(result);
    }

    return 0;
}
