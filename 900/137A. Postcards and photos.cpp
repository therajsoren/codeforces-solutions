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
    string s; cin >> s;

    int cnt = 0;
    for (int i = 0; i < s.size();) {
        if (s.substr(i, 5) == "CCCCC") {
            cnt++;
            i += 5;
        }
        else if (s.substr(i, 5) == "PPPPP") {
            cnt++;
            i += 5;
        }
        else if (s.substr(i, 4) == "CCCC") {
            cnt++;
            i += 4;
        }
        else if (s.substr(i, 4) == "PPPP") {
            cnt++;
            i += 4;
        }
        else if (s.substr(i, 3) == "CCC") {
            cnt++;
            i += 3;
        }
        else if (s.substr(i, 3) == "PPP") {
            cnt++;
            i += 3;
        }
        else if (s.substr(i, 2) == "CC") {
            cnt++;
            i += 2;
        }
        else if (s.substr(i, 2) == "PP") {
            cnt++;
            i += 2;
        }
        else {
            cnt++;
            i++;
        }
    }
    cout << cnt << endl;
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
