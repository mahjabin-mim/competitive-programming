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
    
    int t,n,sum,a;
    
    cin>>t;
    for(int j=0; j<t; j++){
        cin>>n;
        
        if(n==1){
            cout<<0<<"\n";
        }
        
        else{
            sum=1;
            for(int i=2; i<=sqrt(n); i++){
                
                if(n%i == 0){
                    a=n/i;
                    sum+=i;
                    sum+=a;
                }
            }
            
            cout<<sum<<endl;
        }
    }
    
    return 0;
}
