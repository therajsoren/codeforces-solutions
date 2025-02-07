#include <bits/stdc++.h>

#define endl '\n'
#define rep(i, n) for (int i = 0; i < (n); i++)
#define repr(v,i,n) for(int i = 0; i < (n); i++) cin >> (v)[i]
#define all(x) (x).begin(), (x).end()

using namespace std;
using ll = long long;
using lli = long long int;

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

template <typename T>
void _print(T x) { cerr << x; }

template <typename T, typename V>
void _print(pair<T, V> p) { cerr << "{" << p.first << ", " << p.second << "}"; }

template <typename T>
void _print(vector<T> v) { cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]"; }

template <typename T>
void _print(set<T> s) { cerr << "{ "; for (T i : s) { _print(i); cerr << " "; } cerr << "}"; }

template <typename T, typename V>
void _print(map<T, V> m) { cerr << "{ "; for (auto i : m) { _print(i); cerr << " "; } cerr << "}"; }


void solve() {
    int n, k; cin >> n >> k;

    int x = n - k;
    vector<int> v(n);
    repr(v, i, n);

    sort(all(v));


    cout << v[x] << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
#endif

    int tt = 1;
    // cin >> tt;
    while (tt--) {
        solve();
    }
}
