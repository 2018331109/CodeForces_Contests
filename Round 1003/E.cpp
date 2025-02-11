#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<pair<int, vector<int>>> arr(n);

        for (int i = 0; i < n; i++) {
            arr[i].second.resize(m);
            int sum = 0;
            for (int j = 0; j < m; j++) {
                cin >> arr[i].second[j];
                sum += arr[i].second[j];
            }
            arr[i].first = sum;
        }

        sort(arr.begin(), arr.end(), greater<pair<int, vector<int>>>());

        long long ans = 0;
        long long cumulative_sum = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cumulative_sum += arr[i].second[j];
                ans += cumulative_sum;
            }
        }

        cout << ans << endl;
    }
}

int main() {
    solve();
    return 0;
}
