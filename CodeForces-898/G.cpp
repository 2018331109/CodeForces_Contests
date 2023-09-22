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
    string st;
    cin >> st;
    vector<char> s(st.begin(), st.end());

    if (s[0] == 'B' || s.back() == 'B' || st.find("BB") != string::npos)
    {
        int countA = 0;
        for (char c : s)
        {
            if (c == 'A')
            {
                countA++;
            }
        }
        cout << countA << endl;
    }
    else
    {
        if (find(s.begin(), s.end(), 'B') == s.end())
        {
            cout << 0 << endl;
        }
        else
        {
            int i = 0;
            int n = s.size();
            int cnt = 0;
            vector<int> arr;

            while (i < n)
            {
                if (s[i] == 'A')
                {
                    cnt++;
                }
                else
                {
                    arr.push_back(cnt);
                    cnt = 0;
                }
                i++;
            }
            arr.push_back(cnt);
            int countA = 0;
            for (char c : s)
            {
                if (c == 'A')
                {
                    countA++;
                }
            }
            cout << countA - *min_element(arr.begin(), arr.end()) << endl;
        }
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

