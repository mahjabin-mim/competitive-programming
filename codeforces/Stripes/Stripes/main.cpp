//
//  main.cpp
//  Stripes
//
//  Created by Mahjabin Mim on 10/14/22.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    int t,i,j,k;
    int red,blue;
    bool b;
    char arr[8][8];
    cin>>t;
    
    for(k=0; k<t; k++){
        
        for(i=0; i<8; i++){
              
            for(j=0; j<8; j++){
                  
                cin>>arr[i][j];
                //cout<<"\n";
                //cout<<arr[i][j];
            }
        }
        
        red=0; blue=0; b=false;
        for(i=0; i<8; i++){
              
            for(j=0; j<8; j++){
                  
                if(arr[i][j] == 'R'){
                    red+=1;
                }
            }
            
            if(red == 8){
                cout<<"R\n";
                b = true;
                break;
        }
        
            if (b == false  ) {
                
                for(i=0; i<8; i++){
                          
                    for(j=0; j<8; j++){
                              
                        if(arr[i][j] == 'B'){
                                blue+=1;
                        }
                    }
                        
                    if(blue == 8){
                        cout<<"B\n";
                        break;
                    }
                }
            }
    }
    
    return 0;
    }
}
