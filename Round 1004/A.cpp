#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "Yes" << endl
#define no cout << "No" << endl

int digitRoot(int n) {
    while (n >= 10) {
        int sum = 0;
        while (n) {
            sum += n % 10;
            n /= 10;
        }
        n = sum;
    }
    return n;
}

void solve() {
    int x, y;
    cin >> x >> y;
    if(y>x and (y-x)!=1){
        no;
        return;
    }
    int xx=digitRoot(x), yy=digitRoot(y);
    //cout<<xx<<" "<<yy<<endl;

    if(xx-yy==8 or yy==xx+1) yes;
    else no;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
