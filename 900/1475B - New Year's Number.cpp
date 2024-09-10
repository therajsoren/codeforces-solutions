
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    int y = n % 2020;
    int x = (n - 2021 * y) / 2020;
    // cout << x << endl;
    if (x >= 0) cout << "YES" << endl;
    else cout << "NO" << endl;
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
// n = 2020*x + 2021*y
// n = 2020*(x + y) + y;
// n - y = 2020*(x + y)
// so we can write y = n mod 2020 , acts as remainder
// n - y = 2020*x
// so we can write n = 2020*x + 2021*y
// n - 2021*y = 2020*x
// n - 2021*(n mod 2020) = 2020 * x