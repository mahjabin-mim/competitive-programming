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
    
    int n,count;
    cin>>n;
    
    count=2;
    for(int i=2; i<=n/2; i++){
        
        if(n%i == 0){
            count++;
            //cout<<i<<endl;
        }
    }
    
    cout<<count<<endl;
    
    return 0;
}
