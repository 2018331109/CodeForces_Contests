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
    set<int> ist;
    int ans = 0;
    for(int i=0; i<n; i++)
    {
        int k;
        cin>>k;
        ist.insert(k);
        if(k==i && ans==i)
        {
            ans++;
        }
    }
    int vl;
    cout<<ans<<'\n'<<endl;
    while(cin>>vl && vl!=-1)
    {
        cout<<vl<<'\n'<<endl;
    }

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

