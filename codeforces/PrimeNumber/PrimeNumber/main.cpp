//
//  main.cpp
//  PrimeNumber
//
//  Created by Mahjabin Mim on 10/6/22.
//

#include <iostream>
#include <math.h>

using namespace std;

bool arr[100000000];

void algo(int n){
    
    int sq = sqrt(n);
        
    for (int i=4; i<=n; i+=2) {
        arr[i] = 1;
    }
     
    for (int i=3; i<=sq; i+=2) {
        if (arr[i] == 0) {
                        
            for (int j = i*i; j<=n; j+=i)
                arr[j] = 1;
            }
    }
    arr[1]=1;
}

int main() {
    
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
   
    int n,i,count;

    while(cin>>n){
        
        algo(n);
        count=0;
        
        for(i=2; i<=n; i++){
            if(arr[i]==0){
                count++;
            }
        }
      
       cout<<count<<endl;
    }
    
    return 0;
}
