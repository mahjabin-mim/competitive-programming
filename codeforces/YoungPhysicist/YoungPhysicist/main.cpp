//
//  main.cpp
//  YoungPhysicist
//
//  Created by Mahjabin Mim on 10/5/22.
//

#include <iostream>

using namespace std;

int main() {
    
    int n,i,sumX,sumY,sumZ,a,b,c;
    string x,y,z;
    
    cin>>n;
    
    sumX=0;
    sumY=0;
    sumZ=0;
    for(i=1;i<=n;i++){
        cin>>x>>y>>z;
        
        a=stoi(x);
        b=stoi(y);
        c=stoi(z);
        
        sumX+=a;
        sumY+=b;
        sumZ+=c;
    }

    if(sumX==0 && sumY==0 && sumZ==0){
        cout<<"YES"<<"\n";
    }else{
        cout<<"NO"<<"\n";
    }
    
    return 0;
}
