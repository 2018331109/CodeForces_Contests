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
    int n, k, x;
    cin>>n>>k>>x;
    if(k-1>x || k>n)
    {
        cout<<-1<<endl;
        return;
    }

    int cnt=0, v=0;
    int ans=0;
    while(v<k)
    {
        ans+=v;
        v++, cnt++;
    }
    v++;

    int rem=n-cnt;
    if(k==x)
    {
        x--;
    }
    ans+=(rem*x);
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

