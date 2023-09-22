#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
#define neg cout<<-1<<endl;

int md = 1e9+7;

void solve()
{
    vector<string> target(10);
    for (int i = 0; i < 10; i++)
    {
        cin >> target[i];
    }

    int points = 0;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (target[i][j] == 'X')
            {
                int ring = min(min(i, j), min(9 - i, 9 - j));
                points += ring+1;
            }
        }
    }

    cout << points << endl;
}


signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int test=1;
    cin>>test;
    for(int t=1; t<=test; t++)
    {
        solve();
    }

}

