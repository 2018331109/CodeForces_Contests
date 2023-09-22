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
    string a="abc";
    string s;
    cin>>s;
    int cnt=0;
    for(int i=0;i<3;i++)
    {
        if( a[i]!=s[i] )
        {
           cnt++;
        }
    }
   if(cnt>2)
   {
       no;
   }
   else
   {
       yes;
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

