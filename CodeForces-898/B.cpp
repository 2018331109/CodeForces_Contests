#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
#define neg cout<<-1<<endl;

int md = 1e9+7;

void solve()
{
    int n;
    cin>>n;
    int total=1;
    int cnt=0;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i])
        {
            total*=a[i];
        }
        else
        {
            cnt++;
        }
    }

    if(cnt>1)
    {
        cout<<0<<endl;
        return;
    }
    if(cnt==1)
    {
        cout<<total<<endl;
        return;
    }
    sort(a, a+n);
//    if(a[0]==1)
//    {
//        int ab=total*2;
//        int ba=total+(total/a[n-1]);
//    }

    int res= total+(total/a[0]);

    cout<<res<<endl;

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

