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
   int n, m; cin >> n >> m;
   vector<int> a(n), b(m);
   for (int i = 0; i < n; i++) cin >> a[i];
   for (int j = 0; j < m; j++) cin >> b[j];

   sort(b.begin(), b.end());
   int i = 0, j = 0;
   int last = INT_MIN;

   for(int i=0;i<n;i++){
    int x=a[i];
    int lb=lower_bound(b.begin(), b.end(), last+a[i])-b.begin();
    int mn=a[i], mx=a[i];
    if(lb<b.size()){
        mn=min(a[i], b[lb]-a[i]);
        mx=max(a[i], b[lb]-a[i]);
    }

    if(mn>=last) last=mn, a[i]=mn;
    else if(mx>=last) last=mx, a[i]=mx;
    else{
        no;
        return;
    }
   }

   if(is_sorted(a.begin(), a.end())) yes;
   else no;
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
