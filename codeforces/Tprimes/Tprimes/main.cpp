//
//  main.cpp
//  Tprimes
//
//  Created by Mahjabin Mim on 10/4/22.
//

#include <iostream>

using namespace std;

int main() {
    
    long long t,n,i,j,count;
    cin>>t;
    
    for(i=1;i<=t;i++){
        cin>>n;
        
        count=0;
        
        for(j=1;j<=n;j++){
            
            if(n%j==0){
                count+=1;
            }
        }
        
        if(count==3){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}
