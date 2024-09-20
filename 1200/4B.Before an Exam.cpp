#include <bits/stdc++.h>

#define endl '\n'
using namespace std;
using ll = long long;

void solve() {
    int d, sumTime; cin >> d >> sumTime;
    vector<int> minTimes(d), maxTimes(d);
    int minSum = 0, maxSum = 0;

    for (int i = 0; i < d; i++) {
        cin >> minTimes[i] >> maxTimes[i];
        minSum += minTimes[i];
        maxSum += maxTimes[i];
    }

    if (minSum > sumTime || maxSum < sumTime) cout << "NO" << endl;
    else {
        cout << "YES" << endl;
        vector<int> x(minTimes.begin(), minTimes.end());
        int rem = sumTime - minSum;

        for (int i = 0; i < d; i++) {
            int add_hr = min(rem, maxTimes[i]  - minTimes[i]);
            x[i] += add_hr;
            rem -= add_hr;
            if (rem == 0) break;
        }
        for (int i = 0; i < d; i++) cout << x[i] << " ";
    }
    cout << endl;
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