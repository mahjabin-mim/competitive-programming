/**
 *    author:  Mahjabin7
 *    created: 13.12.2024 04:19:38
**/
#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;
template <typename T> using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(...) 42
#endif
 
int main() {    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);    
   
   o_set<int> st;
   st.insert(2);
   st.insert(4);
   st.insert(5);
   st.insert(6);
   st.insert(9);

   for (auto x : st) {
      cout << x << " ";
   }
   cout << '\n';

   auto it = st.find_by_order(1); // log(n)
   cout << *it << '\n'; // access value by it's index

   cout << st.order_of_key(5) << '\n'; // return number of elements < 5

   return 0;
}
