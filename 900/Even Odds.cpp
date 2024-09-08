
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
using ll = long long;

void solve() {
    ll n, k; cin >> n >> k;
    ll middle = (n + 1) / 2;
    if (k <= middle) {
        cout << 2 * k - 1 ;
    } else {
        k = k - middle;
        cout << 2 * k;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int tt = 1;
    // cin >> tt;
    while (tt--) {
        solve();
    }
}
// he wrote down all odd integers from 1 to n
// (ascending order), then all even integers
// from 1 to n(ascending order)
// if you write v(n) then n elements will be initialised with 0 values
