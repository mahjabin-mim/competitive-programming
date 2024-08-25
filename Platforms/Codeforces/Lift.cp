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
    
    int t,liftPos,myPos,door,ent_ext,timee;
    
    door=9;
    ent_ext=10;
    
    cin>>t;
    
    for(int k=0; k<t; k++){
        
        cin>>myPos>>liftPos;
        
        timee=0;
        
        if(myPos > liftPos){
            
            for(int i=liftPos; i<myPos; i++){
                timee+=4;
            }
            
            for(int j=myPos; j>0; j--){
                timee+=4;
            }
            
            cout<<"Case "<<k+1<<": "<<timee+door+ent_ext<<"\n";
        }
    
        else if(myPos <= liftPos){
            
                for(int i=liftPos; i>0; i--){
                    timee+=4;
                }
            
                cout<<"Case "<<k+1<<": "<<timee+door+ent_ext<<"\n";
        }
    }
    
    return 0;
}
