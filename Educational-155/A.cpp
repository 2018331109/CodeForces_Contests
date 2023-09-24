#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define no cout<<"No"<<endl;
#define yes cout<<"Yes"<<endl;
#define neg cout<<-1<<endl;

const int mod=1e9+7;

void solve()
{
    int n;
    cin >> n;

    vector<int> s(n);
    vector<int> e(n);

    cin >> s[0] >> e[0];

    int ans = s[0];

    for (int i = 1; i < n; i++)
    {
        cin >> s[i] >> e[i];

        if (s[i] >= s[0] && e[i] >= e[0])
        {
            ans = -1;
        }
    }

    cout << ans << endl;
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

