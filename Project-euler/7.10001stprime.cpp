#include <bits/stdc++.h>

using namespace std;
using ll = long long;

// tc O(N * sqrt(N)
bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

void generatePrimes(int limit) {
    int j = 1;
    for (int num = 2; num <= limit; ++num) {
        if (isPrime(num)) {
            if(j == 10001){
                cout << j << " "<< num << endl;
            }
            ++j;
        }
    }
}

int main() {
    generatePrimes(200001);
}
