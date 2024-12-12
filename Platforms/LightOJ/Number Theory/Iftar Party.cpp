/**
 *    author:  Mahjabin7
 *    created: 20.11.2024 20:17:06
**/
#include <bits/stdc++.h>
 
using namespace std;
 
#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(...) 42
#endif
 
int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);    
    int t;
    cin >> t;
    int cs = 1;
    while (t--) {
        long long p, l;
        cin >> p >> l;

        p -= l;
        vector<long long> v;
        for(int i = 1; 1ll * i * i <= p; i++){
            if(p % i == 0){
                if(i > l){
                    v.push_back(i);
                }
                if(i != p/i && p/i > l){
                    v.push_back(p/i);
                }   
            }
        }
        sort(v.begin(), v.end());
        
        cout << "Case " << cs << ": ";
        cs++;
        if(v.empty()){
            cout << "impossible";
        }else{
            for(auto q:v){
                cout << q << " ";
            }
        }
        cout << endl;
    }
    
    return 0;
}
