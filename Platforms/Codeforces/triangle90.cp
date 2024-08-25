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
    
    int t,a,b,c;
    cin>>t;
    
    for(int i=0; i<t; i++){
        
        cin>>a>>b>>c;
        
        if(c>a && c>b){
            int s= pow(a,2) + pow(b,2);
            int p= pow(c,2);
        
            if(s == p){
                cout<<"yes\n";
            } 
            else{
                cout<<"no\n"; 
            } 
        }
        
        else if(b>a && b>c){
            int s= pow(a,2) + pow(c,2);
            int p= pow(b,2);
        
            if(s == p){
                cout<<"yes\n";
            } 
            else{
                cout<<"no\n"; 
            } 
        }
        
        else if(a>b && a>c){
            int s= pow(b,2) + pow(c,2);
            int p= pow(a,2);
        
            if(s == p){
                cout<<"yes\n";
            } 
            else{
                cout<<"no\n"; 
            } 
        }
    }
    
    return 0;
}
