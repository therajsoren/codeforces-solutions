
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    int cnt = 0;
    while (n != 1) {
        if (n % 6 == 0) n /= 6;
        else if (n % 3 == 0) n *= 2; // if n is not divisble by 6
        else {
            cout << -1 << endl;
            return;
        }
        cnt++;
    }
    cout << cnt << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int tt = 1;
    cin >> tt;
    while (tt--) {
        solve();
    }
}
