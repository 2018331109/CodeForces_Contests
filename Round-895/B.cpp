#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
#define neg cout<<-1<<endl;

int mod = 1e9+7;
int test;

void solve()
{
    int n;
    cin>>n;
    vector<pair<int, int>>v;
    for(int i=0; i<n; i++)
    {
        int x, y;
        cin>>x>>y;

        v.pb({x, y});

    }

    sort(v.begin(), v.end());

    int last=0;
    int ans;
    int cnt=0;
    int tmp;
    for(auto it:v)
    {
        if(cnt==0)
        {
            ans=it.first+(it.second-1)/2;
            cnt++;
            continue;
        }

        if(ans>it.first)
        {
            int r=(ans-it.first);
            int m=(it.second-1)/2;
            int mn=min(r, m);
            ans=it.first+max((int)0, mn);
        }

    }

    cout<<ans<<endl;

}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    for(test=1; test<=t; test++)
    {
        solve();
    }
}

