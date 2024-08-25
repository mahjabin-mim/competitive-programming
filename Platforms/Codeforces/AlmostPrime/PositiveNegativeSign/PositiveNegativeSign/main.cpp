//
//  main.cpp
//  PositiveNegativeSign
//
//  Created by Mahjabin Mim on 10/8/22.
//

#include <iostream>

using namespace std;

int main() {
    
    long long t,n,m,i,j,x,y,val,a;

    cin>>t;
    
    for(i=1; i<=t; i++){
       
        cin>>n>>m;
        
        val = (n/2) * m;
        
//        a = (n/m)/2;
//        x=0;y=0;
//        for(j=1; j<=(m*2); j++){
//
//            if(j<=m){
//                x+=j;
//            }else{
//                y+=j;
//            }
//        }
//
//        val = (y-x)*a;
        
        cout<<"Case "<<i<<": "<<val<<"\n";
    }
    
    return 0;
}
