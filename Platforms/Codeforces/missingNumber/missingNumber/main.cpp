//
//  main.cpp
//  missingNumber
//
//  Created by Mahjabin Mim on 9/23/22.
//

#include <iostream>
//#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    
    long long n,i,x;
    cin>>n;
    
    long long arr[n+1];
    memset(arr, 0, sizeof(arr));
    
    for(i=1;i<=n-1;i++){
        cin>>x;
        
        arr[x]=1;
    }
    
    for(i=1;i<=n;i++){
        
        if(arr[i]==0){
            cout<<i<<endl;
            break;
        }
    }
    
    return 0;
}
