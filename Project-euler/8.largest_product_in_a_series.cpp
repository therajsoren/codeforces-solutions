#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll largestProduct(string s, int n, int k) {
    ll ans = 0;
    for (int i = 0; i < n - k; i++) {
        ll product = 1;
        for (int j = i; j < i + k; j++) {
            product *= s[j] - '0';
        }
        ans = max(ans, product);
    }
    return ans;
}

int main() {
    string s; cin >> s;
    int n = s.size();
    int k; cin >> k;
    ll ans = largestProduct(s, n, k);
    cout << ans << endl;
}