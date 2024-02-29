#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{
    optimized
    
      int n;
      cin >> n;
 
      int arr[n];
      int max_idx, min_idx;
 
      for (int i = 0; i < n; i++){
        cin >> arr[i];
      }
 
      max_idx = 0;
      min_idx = 0;
 
      for (int i = 0; i < n; i++){
        if (arr[i] > arr[max_idx])
            max_idx = i;
        if (arr[i] <= arr[min_idx])
            min_idx = i;
      }
      int ans;
      if (max_idx < min_idx){
        ans = max_idx + (n - min_idx - 1);
      }
      else{
        ans = max_idx + (n - min_idx - 1) - 1;
      }
      cout << ans << endl;
    
    
  return 0;
}