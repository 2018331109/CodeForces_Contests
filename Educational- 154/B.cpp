#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
#define neg cout<<-1<<endl;
#define rine cout<<endl;
int mod = 1e9+7;

int test;

void solve()
{
    string a,b;
    cin>>a>>b;
    int n=a.size();
    int c[n]= {};

    int on=0, ze=1;
    int f=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]!=b[i])
        {
            if(on)
            {
                yes;
                return;
            }
            else
            {
                while(i<n)
                {
                    if(a[i]==b[i] && a[i]=='0')
                    {
                        break;
                    }
                    i++;
                }
                if(i==n)
                {
                    no;
                    return;
                }
                else
                {
                    on=0;
                }
            }
        }
        else if(a[i]=='1')
        {
            on++;
        }
        else
        {
            ze++;
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
    for(test=1; test<=t; test++)
    {
        solve();
    }
}
