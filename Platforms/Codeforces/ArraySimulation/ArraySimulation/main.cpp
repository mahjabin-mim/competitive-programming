//
//  main.cpp
//  ArraySimulation
//
//  Created by Mahjabin Mim on 10/9/22.
//

#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int t,n,m,a,d,y,z,i,j,k,r,add,temp;
    int arr[n];
    char c;
    
    cin>>t;
    for(i=1; i<=t; i++){
        
        cin>>n>>m;
        
        for(j=1; j<=n; j++){
            cin>>a;
            arr[j] = a;
            //cout<<arr[j]<<endl;
        }
            
        for(k=1; k<=m; k++){
                
            cin>>c;
                
            if(c=='S'){
                
                cin>>d;

                for(j=1; j<=n; j++){
                    arr[j] = arr[j] + d;
                    cout<<arr[j]<<" ";
                }
                
            }else if(c=='M'){
                
                cin>>d;
                
                for(j=1; j<=n; j++){
                    arr[j] = arr[j] * d;
                    cout<<arr[j]<<" ";
                }
                
            }else if(c=='D'){
                
                cin>>d;
                
                for(j=1; j<=n; j++){
                    arr[j] = arr[j] / d;
                    cout<<arr[j]<<" ";
                }
                
            }else if(c=='P'){
                
                cin>>y>>z;
                swap(arr[y],arr[z]);
                cout<<arr[y]<<" "<<arr[z]<<" ";
//                temp = arr[y];
//                arr[y] = arr[z];
//                arr[z] = temp;
//
//                cout<<arr[0]<<arr[1];
                
            }else if(c=='R'){
                
                for(j=n; j<=1; j--){

                    cout<<arr[j]<<" ";
                }
            }
        }
    }
    return 0;
}
