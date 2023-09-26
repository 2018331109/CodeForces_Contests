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
    int n, k;
    cin >> n >> k;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    bool f = false;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == k)
        {
            f = true;
            break;
        }
    }

    if (f)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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

