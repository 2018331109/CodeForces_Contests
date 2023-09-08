#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
#define neg cout<<-1<<endl;

int mod = 1e9+7;
int test;

void solve()
{
    int l, r;
    cin>>l>>r;
    if(r<=3)
    {
        cout<<-1<<endl;
        return;
    }

    if(l==r)
    {
        if(l%2==0)
        {
            cout<<2<<" "<<l-2<<endl;
            return;
        }
        else
        {
            for(int i=2; i<=sqrt(l); i++)
            {
                if(l%i==0)
                {
                    cout<<i<<" "<<l-i<<endl;
                    return;
                }
            }
            cout<<-1<<endl;
            return;
        }
    }

    if(r%2)
    {
        r--;
    }
    cout<<2<<" "<<(r-2)<<endl;
    return;


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

