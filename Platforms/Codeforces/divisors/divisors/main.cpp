//
//  main.cpp
//  divisors
//
//  Created by Mahjabin Mim on 9/16/22.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    int t,l,r,i,j,k,number,p;
    bool prime;

    cin>>t;
    
    for(i=1;i<=t;i++){
        cin>>l>>r;
        
        number=0;
        for(j=l;j<=r;j++){
             
            prime=true;
            for(k = 2; k < j; k++) {
                
                p=j%k;
                if(p == 0) {
                    //cout<<j<<endl;
                    prime=false;
                    break;
                }
                              
            }
            
            if(prime == true){
                
                if(j==1){
                    number-=1;
                }
                //cout<<j<<endl;
                number+=1;
            }
        }
        
        cout<<"\nCase "<<i<<": There are "<<number<<" numbers between "<<l<<" and "<<r<<"."<<endl;
    }
    
    return 0;
}
