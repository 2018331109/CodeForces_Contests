#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define no cout<<"NO"<<endl;
#define ies cout<<"YES"<<endl;
#define neg cout<<-1<<endl;

int md = 1e9+7;

void solve()
{
    int n;
    cin>>n;
    int ans[n];
    vector<pair<int, int>>a ;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        a.pb({x, i});
    }
    sort(a.begin(),a.end());
    for(auto it:a)
    {
        ans[it.second]=n;
        n--;
    }

    for(auto it:ans)
    {
        cout<<it<<" ";
    }

    cout<<endl;
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

