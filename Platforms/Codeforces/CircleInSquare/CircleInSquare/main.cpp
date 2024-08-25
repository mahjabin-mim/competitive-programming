//
//  main.cpp
//  CircleInSquare
//
//  Created by Mahjabin Mim on 10/6/22.
//

//#include<bits/stdc++.h>
#include <iostream>
#include <math.h>
#include<iomanip>

using namespace std;

int main(int argc, const char * argv[]) {
    
    int t,i;
    double r,area,pi;
    pi = 2.0 * acos(0.0);
    
    cin>>t;
    
    for(i=1; i<=t; i++){
        
        cin>>r;
        
        area = (2 * r * 2 * r) - (pi * (r * r));
        
        cout<<"Case "<<i<<": "<<fixed<<setprecision(2) <<area<<"\n";
    }
    return 0;
}
