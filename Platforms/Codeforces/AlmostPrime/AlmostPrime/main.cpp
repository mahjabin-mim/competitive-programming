//
//  main.cpp
//  AlmostPrime
//
//  Created by Mahjabin Mim on 10/3/22.
//

#include <iostream>
//#include <bits/stdc++.h>

using namespace std;

int main(int argc, const char * argv[]) {

    int n,i,j,k,r,d,m,count,totalPrime;
    bool is_prime;
    totalPrime=0;
    
    cin>>n;
    
    for(i=1;i<=n;i++){
        
        count=0;
        for(j=2;j<=n/2;j++){
           
            r=i%j;
           
            if(r==0){

                //d=i/j;
                //cout<<i<<"/"<<j<<"="<<d<<endl;
                //cout<<j<<endl;
                m=j/2;
                
                is_prime = true;
                for(k = 2; k <= m; k++){
                
                    if(j % k == 0){
                      
                          //cout<<"not Prime."<<endl;
                          is_prime=false;
                          //break;
                      }
                  }
                if (is_prime==true){
                    //cout<<"Prime."<<endl;
                    //cout <<j<<endl;
                    count+=1;
                }
            }
        }
        
        if(count==2){
            totalPrime+=1;
        }
    }
    
    cout<<totalPrime<<endl;
    
    return 0;
}
