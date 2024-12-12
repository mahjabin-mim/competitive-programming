/**
 *    author:  Mahjabin7
 *    created: 12.12.2024 23:43:56
**/
#include <bits/stdc++.h>
 
using namespace std;
 
#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(...) 42
#endif

// time complx log(n);
const int N = 1e5 + 7;
vector<int> v(N);
vector<int> sum(4 * N);

void build (int node, int b, int e) {
   if (b == e) {
      sum[node] = v[b]; // base case
      return;
   }
   int l = 2 * node; // left child
   int r = 2 * node + 1; // right child
   int mid = (b + e) / 2; // find range for next 2 child
   build(l, b, mid); 
   build(r, mid + 1, e);
   sum[node] = sum[l] + sum[r]; // -->change this according to query
} 

int query (int node, int b, int e, int i, int j) {
   if (b > j || e < i) {
      return 0; // if out of range query
      // -->return appropiate value according to query
   }
   if (b >= i && e <= j) {
      return sum[node]; // if full range in query
   }
   // if intersect
   int l = 2 * node; // left child
   int r = 2 * node + 1; // right child
   int mid = (b + e) / 2; // find range for next 2 child
   return query(l, b, mid, i, j) + query(r, mid + 1, e, i, j); // -->change this according to query
}

void update (int node, int b, int e, int i, int x) {
   if (b > i || e < i) {
      return; // out of range
   }
   if (b == i && e == i) {
      sum[node] = x; // update value
      return;
   }
   int l = 2 * node; // left child
   int r = 2 * node + 1; // right child
   int mid = (b + e) / 2; // find range for next 2 child
   update(l, b, mid, i, x);
   update(r, mid + 1, e, i, x);
   // then update the sum after changing value
   sum[node] = sum[l] + sum[r]; // -->change this according to query
}

int main() {    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);    

   int n;
   cin >> n;
   for (int i = 1; i <= n; i++) {
      cin >> v[i];
   }

   build(1, 1, n); // build the tree
   // v = [1 2 3 4 5]
   cout << sum[1] << endl; // output - 15
   cout << query(1, 1, n, 2, 4) << '\n'; // sum of 2-4
   update(1, 1, n, 3, 4);
   // v = [1 2 4 4 5]
   cout << query(1, 1, n, 2, 4) << '\n'; // sum of 2-4 after changing val of 3 to 4

   return 0;
}
