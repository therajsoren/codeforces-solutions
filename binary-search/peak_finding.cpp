#include <bits/stdc++.h>
using namespace std;

int n,x;
int arr[100100];

int check(int mid){
    if(mid == n - 1) return 1;
    if(arr[mid]>arr[mid+1]) return 1;
    else return 0;
}
int main()
{
    cin >> n;

    for(int i = 0; i < n; i++) cin >> arr[i];
    cin >> x;
    
    // first strictly increasing then strictly decreasing ----> bitonic arrays
    // peak finding 
    // [1,5,9,11,9,2,1]
    
    int lo = 0,hi = n - 1;
    int ans = -1; // default
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(check(mid)==1){
            ans = mid;
            hi = mid - 1;
        } else{
            lo = mid + 1;
        }
    }
    cout << ans << endl;
}
