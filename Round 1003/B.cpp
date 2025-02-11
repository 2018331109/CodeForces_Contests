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

void solve()
{
    int n;
    cin >> n;
    vector<int> v(1003, 0);
    int x;


    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v[x]++;
    }

//    for(int i=1;i<=10;i++) cout<<v[i]<<" ";
//    cout<<endl;
    for(int i=1;i<=1000;i++){
        if(v[i]%2){
            if(v[i]==1){
                no;
                return;
            }
            v[i+1]+=v[i]-2;
        }
        else v[i+1]+=max(v[i]-2, 0ll);

    }
//    for(int i=1;i<=10;i++) cout<<v[i]<<" ";
//    cout<<endl;
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
