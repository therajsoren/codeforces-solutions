#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
using ll = long long;

void solve() {
    int n, m; cin >> n >> m;
    int *arr = new int[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr + n);
    int sum = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] <= 0) {
            if (cnt == m) break;
            sum += arr[i];
            cnt++;
        }
    }
    // cout << cnt << endl;
    cout << abs(sum) << endl;
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