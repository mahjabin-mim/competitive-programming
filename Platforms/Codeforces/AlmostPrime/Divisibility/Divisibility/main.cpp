//
//  main.cpp
//  Divisibility
//
//  Created by Mahjabin Mim on 10/6/22.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    long long t,n,x,y,i,j;
    cin>>t;
    
    for(i=1; i<=t; i++){
        
        cin>>n>>x>>y;
        
        for (j=x; j<n; j++){
            
            if(j%x==0){
                if(j==y || j%y==0){
                    continue;
                }else{
                    cout<<j<<" ";
                }
            }
        }
    }
    return 0;
}
