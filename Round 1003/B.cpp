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
    string s;
    cin >> s;
    int n=s.size();
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]){
            cout<<1<<" "<<endl;
            return;
        }
    }
    cout<<s.size()<<endl;
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
