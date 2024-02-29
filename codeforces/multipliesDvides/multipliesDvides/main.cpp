//
//  main.cpp
//  multipliesDvides
//
//  Created by Mahjabin Mim on 9/24/22.
//

#include <iostream>

using namespace std;

//#include<bits/stdc++.h>
#include <iostream>

using namespace std;

void algo(long long a){

    cout<<a<<" ";
    
    if(a==1){
        return;
    }else{
        if(a%2==0){
            a = a/2;
        }else{
            a = a*3+1;
        }
        
        algo(a);
    }
}

int main(){

    long long n;
    cin>>n;

    algo(n);
    return 0;
}
