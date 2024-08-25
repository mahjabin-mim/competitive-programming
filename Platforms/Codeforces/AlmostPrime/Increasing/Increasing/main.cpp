//
//  main.cpp
//  Increasing
//
//  Created by Mahjabin Mim on 10/13/22.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    long long t,n,a,i,j,k,l;
    bool val;
    cin>>t;
    
    for(i=1; i<=t; i++){
        
        cin>>n;
        long long arr[n];
        
        if(n == 1){
            cin>>a;
            cout<<"YES\n";
        }
        
        else{
           
            val = true;
            for(j=0; j<n; j++){
                
                cin>>a;
                arr[j] = a;
            }
            
            for(j=0; j<n; j++){
               
                for(k=j+1; k<n; k++){
                
                    if(arr[j] == arr[k]){
                        val = false;
                        break;
                    }
                }
            }
            
            if(val == true){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
    }
    
    return 0;
}
    


//                        for(j=1; j<n; j++){
//
//                            //cout<<arr[j];
//
//                            if(arr[j] != arr[j+1]){
//
//                                val = true;
//                                break;
//                            }
//                        }
