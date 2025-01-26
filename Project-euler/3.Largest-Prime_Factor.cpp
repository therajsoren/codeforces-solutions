#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
   ll n = 600851475143;
   ll ans = 1;
   for(ll i = 2; i * i <= n; i++){
       if(n % i == 0){
           ans = i;
           while(true){
               n/=i;
               if(n%i) break;
           }
       }
   }
   if(n > ans) ans = n;
   cout << ans << endl;
}