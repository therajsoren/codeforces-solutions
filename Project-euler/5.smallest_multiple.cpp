#include <bits/stdc++.h>
using namespace std;

bool is_palindromic(const int x){
        string s = to_string(x);
        return s == string(s.rbegin(),s.rend());
}

using ll = long long;
ll gcd(ll a, ll b){
    while(b){
        a %= b;
        swap(a,b);
    }
    return a;
}
ll lcm(ll a , ll b){
    return a * (b / gcd(a,b));
}

int main()
{   
   int n = 20;
   ll ans = 1;
   for(int i = 1; i <= n; i++){
       ans = lcm(ans,i);
   }
   cout << ans << endl;
}
