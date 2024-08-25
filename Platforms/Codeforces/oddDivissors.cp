//
//  main.cpp
//  divisors
//
//  Created by Mahjabin Mim on 9/16/22.
//

#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n;
    cin>>n;
    
    cout<<1<<endl;
    
    for(int i=2; i<=n/2; i++){
        
        if(n%i == 0){
            
            if(i%2 != 0){
                cout<<i<<endl;
            }
        }
    }
    
    if(n%2 != 0){
        cout<<n<<endl;
    }
    
    return 0;
}
