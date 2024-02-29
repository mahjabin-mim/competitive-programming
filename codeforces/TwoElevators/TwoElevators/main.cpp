//
//  main.cpp
//  TwoElevators
//
//  Created by Mahjabin Mim on 9/12/22.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    int t,a,b,c,f,s;
    cin >> t;
    
    for(int i = 0; i < t; i++){
        cin >> a >> b >> c;
        
        //b and can not be same
        if(b == c)
            break;
        
        
        //time measurement
        f = a-1;
        if(b<c){
            s = (c - b)+(c - 1);
        }else if(b>c){
            s = (b - 1);
        }
       
        
        //find the elevator
        if(a==1){
            cout << 1 << endl;
        }else if(f > s){
            cout << 2 << endl;
        }else if(f < s){
            cout << 1 << endl;
        }else if(f == s){
            cout << 3 << endl;
        }
    }
    
    return 0;
}
