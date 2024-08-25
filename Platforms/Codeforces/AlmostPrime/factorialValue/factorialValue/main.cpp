//
//  main.cpp
//  factorialValue
//
//  Created by Mahjabin Mim on 9/23/22.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    int t,n,i,j,f;
    cin>>t;
    
    for(i=1;i<=t;i++){
        cin>>n;
        
        f=1;
        for(j=1;j<=n;j++){
            f*=j;
        }        
        cout<<f<<endl;
    }
    return 0;
}
