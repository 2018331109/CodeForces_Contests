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
    cin>>n;
    int a[n], b[n];
    int sa=0, sb=0, mna=mod, mnb=mod;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        mna=min(mna, a[i]);
        sa+=a[i];
    }

    for(int i=0; i<n; i++)
    {
        cin>>b[i];
        mnb=min(mnb, b[i]);
        sb+=b[i];
    }

    int ans=min((sb+(mna*n)), (sa+(mnb*n)));
    cout<<ans<<endl;


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

