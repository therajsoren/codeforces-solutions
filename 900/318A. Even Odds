
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
using ll = long long;

void solve() {
    ll n, k; cin >> n >> k;
    k--;
    // 1 3 5 7 9 2 4 6 8 10
    // 0 1 2 3 4 5 6 7 8 9
    // 1 3 5 7 2 4 6
    // 0 1 2 3 4 5 6
    vector<int> v;
    for (int i = 1; i <= n; i++) {
        if (i & 1) v.push_back(i);
    }
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) v.push_back(i);
    }
    // for (auto & it : v) cout << it << " ";
    cout << v[k] << endl;
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
