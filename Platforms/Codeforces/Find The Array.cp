#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{
    optimized
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i<n; i++) {
            cin >> arr[i];
            if (arr[i] != 1 and (arr[i]&1))
                arr[i]++;
        }
        
        for (int i = 0; i<n-1; ++i) {
            if (arr[i] % arr[i+1] and arr[i+1]%arr[i]) {
                int a = arr[i], b = arr[i+1];
                if (a < b) swap(a, b);
                int div = a%b;
                if (arr[i+1] > arr[i])
                    arr[i+1] -= div;
                else arr[i+1] = __gcd(arr[i], arr[i+1]);
            }
        }
        for (auto i : arr) cout << i << ' ';
        cout << '\n';
    }
    
  return 0;
}