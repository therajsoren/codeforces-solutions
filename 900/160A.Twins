
#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    int * arr = new int[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    int sum  = 0;
    for (int i = 0; i < n; i++) sum += arr[i];
    sort(arr, arr + n);
    int mn = 0;
    int last = n - 1;
    int cnt = 0;
    while (sum >= mn) {
        mn += arr[last];
        sum -= arr[last];
        cnt++;
        last--;
    }
    cout << cnt << endl;
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
// ma apne 2 bache ko kuch paisa nhi diye school cafeteria
// se lunches kardhine ke liye

// ma apne pocket me check krte hai aur kuch
// coin pati hai different values ka
// ranging from a1 ..... an
// sum of coin > sum of remaining coins
// [min. no. of coin] > sum of remaining coins