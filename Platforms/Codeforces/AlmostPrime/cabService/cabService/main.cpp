//
//  main.cpp
//  cabService
//
//  Created by Mahjabin Mim on 9/23/22.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    int t,x,y,i;
    
    cin>>t;
    
    for(i=1;i<=t;i++){
        
        cin>>x>>y;
        
        if(x<y){
            cout<<"FIRST"<<endl;
        }else if(x>y){
            cout<<"SECOND"<<endl;
        }else{
            cout<<"ANY"<<endl;
        }
    }
    return 0;
}
