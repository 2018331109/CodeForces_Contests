#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define no cout<<"No"<<endl;
#define yes cout<<"Yes"<<endl;
#define neg cout<<-1<<endl;
#define rine cout<<endl;
int mod = 1e9+7;

int test;

void solve()
{
    int n;
    string  s;
    cin>>s;
    int f=0;
    for(int i=0; i<9; i++)
    {
        if(s[i]=='1')
        {
            f=1;
        }
        if(s[i]=='3' && f==0)
        {
            cout<<31<<endl;
            return;
        }
    }
    cout<<13<<endl;
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
