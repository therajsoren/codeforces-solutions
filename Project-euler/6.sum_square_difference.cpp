#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
   int n = 100;
   int sum = 0, sos = 0;
   for(int i = 1; i <= n; i++){
       sum += i;
       sos += i * i;
   }
   cout << sum * sum - sos << endl;
}