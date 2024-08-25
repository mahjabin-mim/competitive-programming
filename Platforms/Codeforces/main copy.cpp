//
//  main.cpp
//
//  Created by Mahjabin Mim 
//

#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n,a;
    cin>>n;
    
    int x[n+1];
    memset(x,0,sizeof x);
    
    for(int i=1; i<=n; i++){
        if(x[i]==0){
            cin>>x[i];
        }
    }
    

    for(int i=1; i<=n; i++){
        cout<<x[i]<<" ";
    }
    
    return 0;
}
