#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
#define neg cout<<-1<<endl;

const int mod=1e9+7;

void solve()
{
    int n, k, x;
    cin >> n >> k >> x;

    int mn = (k * (k + 1)) / 2;
    int a = n - k + 1;
    int b = k * a + (k * (k - 1)) / 2;

    if (mn <= x && x <= b)
    {
        yes;
    }
    else
    {
        no;
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

