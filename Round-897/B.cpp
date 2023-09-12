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
    int n;
    cin >> n;

    vector<char> res(n + 1, '0');
    int a = n / 2;

    string s;
    cin >> s;

    int cnt = 0;
    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        if (s[i] != s[j])
        {
            cnt++;
        }
        i++;
        j--;
    }

    for (int i = 0; i <= a - cnt; i++)
    {
        res[cnt + i * 2] = '1';
        if (n % 2 == 1)
        {
            res[cnt + i * 2 + 1] = '1';
        }
    }

    for (int i = 0; i <= n; i++)
    {
        cout << res[i];
    }

    cout << endl;
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

