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
    
    long long n,fac;
    cin>>n;
    
    if (n == 0) {
        cout<<1<<endl;
    }
    
    else{
        fac=1;
        for(int i=1; i<=n; i++){
            
            fac *= i;
        }
    
        cout<<fac<<endl;
    }
    
    return 0;
}
