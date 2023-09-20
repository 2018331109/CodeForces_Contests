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
    int n, m;
    cin>>n>>m;
    int a[n], b[m];
    int xora=0, orb=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        xora^=a[i];
    }
    for(int i=0; i<m; i++)
    {
        cin>>b[i];
        orb|=b[i];
    }
    int mn, mx;

    if(n%2==0)
    {
        mx=xora;
        int andd=(xora & orb);
        mn=mx-andd;
    }
    else
    {
        mn=xora;

        mx=xora|orb;
    }

    cout<<mn<<" "<<mx<<endl;

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

