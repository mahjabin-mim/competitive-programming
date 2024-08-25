//
//  main.cpp
//  HowCow
//
//  Created by Mahjabin Mim on 10/7/22.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {

    int t, x1, y1, x2, y2, m, x, y, i, j;

    cin>>t;
    
    for(i=1; i<=t; i++){
        
        cin>>x1>>y1>>x2>>y2;
        cin>>m;
        
        cout<<"Case "<<i<<":\n";
        
        for(j=1; j<=m; j++){
            
            cin>>x>>y;
            
            if (x>x1 && x<x2 && y>y1 && y<y2){
                cout<<"Yes\n";
            }else{
                cout<<"No\n";
            }
        }
    }
    
    return 0;
}
