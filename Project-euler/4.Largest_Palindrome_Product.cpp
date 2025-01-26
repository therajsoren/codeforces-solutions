#include <bits/stdc++.h>
using namespace std;

bool is_palindromic(const int x){
        string s = to_string(x);
        return s == string(s.rbegin(),s.rend());
}

int main()
{   
   int ans = 0;
   for(int i = 100; i < 1000; i++){
       for(int j = 100; j < 1000; j++){
           if(is_palindromic(i*j)){
               ans = max(ans,i*j);
           }
       }
   }
}