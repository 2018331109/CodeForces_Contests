#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
#define neg cout<<-1<<endl;

const int mod=1e9+7;
class S_tree
{
public:
    int n;
    vector<int> tree;

    S_tree(vector<int>& v)
    {
        n = v.size();
        tree.resize(4 * n);
        build(v, 0, 0, n - 1);
    }

    void build(vector<int>& v, int t_ind, int left, int right)
    {
        if (left == right)
        {
            tree[t_ind] = v[left];
            return;
        }
        int mid = (left + right) / 2;
        build(v, 2 * t_ind + 1, left, mid);
        build(v, 2 * t_ind + 2, mid + 1, right);
        tree[t_ind] = (tree[2 * t_ind + 1] & tree[2 * t_ind + 2]);
    }

    int query(int t_ind, int left, int right, int ql, int qr)
    {
        if (ql > right || qr < left)
        {
            return -1; // Return 0 for out-of-range queries
        }
        if (ql <= left && right <= qr)
        {
            return tree[t_ind];
        }
        int mid = (left + right) / 2;
        int l_res = query(2 * t_ind + 1, left, mid, ql, qr);
        int right_result = query(2 * t_ind + 2, mid + 1, right, ql, qr);
        return (l_res & right_result);
    }
};

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    S_tree st(v);
    int k;
    cin >> k;
    vector<int> res;

    for (int i = 0; i < k; ++i)
    {
        int l, x;
        cin >> l >> x;
        l -= 1;
        int r = n - 1;
        int ans = -1;
        int mid = (l + r) / 2;

        while (l <= r && l <= mid && mid <= r)
        {
            if (l == r && v[l] < x)
            {
                break;
            }
            if (st.query(0, 0, st.n - 1, l, r) >= x && (r + 1 == n || st.query(0, 0, st.n - 1, l, r + 1) < x))
            {
                ans = r + 1;
                break;
            }
            if (st.query(0, 0, st.n - 1, l, mid) >= x && (mid + 1 == n || st.query(0, 0, st.n - 1, l, mid + 1) < x))
            {
                ans = mid + 1;
                break;
            }
            if (st.query(0, 0, st.n - 1, l, mid) < x)
            {
                r = mid - 1;
                mid = (l + r) / 2;
            }
            else if (st.query(0, 0, st.n - 1, l, mid) >= x)
            {
                mid = (mid + r) / 2 + 1;
            }
        }

        res.pb(ans);
    }

    for (int i = 0; i < k; ++i)
    {
        cout << res[i] << " ";
    }

    cout << endl;
}


signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int test = 1;
    cin >> test;
    for(int t = 1; t <= test; t++)
    {
        solve();
    }
}

