//
//  main.cpp
//  Sum
//
//  Created by Mahjabin Mim on 10/13/22.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int t,a,b,c,i;
    cin>>t;
    
    for(i=1; i<=t; i++){
        
        cin>>a>>b>>c;
        
        if(a+b==c || a+c==b || b+c==a){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}
