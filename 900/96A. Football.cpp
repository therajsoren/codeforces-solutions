
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
using ll = long long;

void solve() {
    string s; cin >> s;
    int cnt = 0;
    for (int i = 0; i < s.size() - 1; i++) {
        if (s[i] != s[i + 1]) cnt = 0;
        if (s[i] == s[i + 1]) {
            cnt++;
            // cout << cnt << " ";
            if (cnt >= 6) { // so basically when you are asked to find atleast then it will be == n - 1;
                cout << "YES";
                return;
            }
        }
    }
    cout << "NO";
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
