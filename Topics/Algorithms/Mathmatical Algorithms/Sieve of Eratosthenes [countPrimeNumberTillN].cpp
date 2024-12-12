/*
Author: Mahjabin7
Date: 26/08/24
Algo: Sieve Of Eratosthenes
This is a optimized code to print all primes till n.
*/
#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp> 
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(...) 42
#endif

const int N = 1e5;

vector<bool> is_prime(N + 7, true);
vector<int> primes;
void seive() {
   is_prime[0] = false;
   is_prime[1] = false;
   for (int i = 4; i <= N; i += 2) {
     is_prime[i] = 0;
   }
   for (int i = 3; i * i <= N; i += 2) {
      if (is_prime[i]) {
         for (int j = i * i; j <= N; j += i) {
            is_prime[j] = 0;
         }
      }
   }
   for (int i = 2; i <= N; i++) {
      if (is_prime[i]) {
         primes.push_back(i);
      }
   }
}

int main() 
{    
    optimized
    int n;
    cin>>n;
    if(n==0 || n==1){
        cout<<0<<endl;
    }else{
        seive();
        int ans=0;
        for(int i=2; i<=n; i++){
            if(v[i]==0){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    
    return 0;
}