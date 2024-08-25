//
//  main.cpp
//  ColoredBalls
//
//  Created by Mahjabin Mim on 9/8/22.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int i,j,t,n,ball,max,ind;
    cin >> t;
    
    for (i=0; i<t; i++){
        cin >> n;
        max=1,ind;
        for(j=0; j<n; j++){
            cin >> ball;
            
            if(max<ball || max==ball){
                max=ball;
                ind=j+1;
            }
        }cout<< ind << endl;
    }
    
    return 0;
}
