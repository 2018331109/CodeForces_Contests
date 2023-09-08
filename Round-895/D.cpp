#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
#define neg cout<<-1<<endl;

int mod = 1e9+7;
int test;

void solve()
{
    int n, x, y;
    cin>>n>>x>>y;
    int lc=(x*y)/__gcd(x, y);

    int damnai=n/lc;
    int bad=n/y - damnai;
    int ace=n/x - damnai;

    int mot=(n*(n+(int)1))/(int)2;
    int prothom=((n-ace)*(n-ace+(int)1))/(int)2;

    int thaklo=mot-prothom;

    int ans=thaklo - (bad*(bad+(int)1))/2;
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

