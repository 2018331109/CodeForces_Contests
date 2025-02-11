#include<bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
#define neg cout << -1 << endl
#define pb push_back
#define ff first
#define ss second
const int mod = 1e9+7;
const int N = 200005;
void solve() {
    int n; cin>>n;
    int m; cin>>m;
    vector<int>a(n, 0), b(n, 0);
    for(int i=0;i<n;i++) cin>>a[i];
    int x;
    cin>>x;
    for(int i=0;i<n;i++){
        b[i]=x-a[i];
    }

    int last=INT_MIN;

    for(int i=0;i<n;i++){
        int mn=min(a[i], b[i]);
        int mx=max(a[i], b[i]);
        if(mn>=last) last=mn;
        else if(mx>=last) last=mx;
        else{
            no;
            return;
        }
    }
    yes;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    cin >> t;
    while (t--) solve();

    return 0;
}
