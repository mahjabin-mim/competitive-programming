//
//  main.cpp
//  printSomePrime
//
//  Created by Mahjabin Mim on 10/4/22.
//

#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

bool arr[100000000];
int n = 100000000-1;
vector<long long>prime;

void algo(){
    
    int sq = sqrt(n);
    
    prime.push_back(2);
    
    for (int i=4; i<=n; i+=2) {
        arr[i] = 1;
    }
     
    for (int i=3; i<=sq; i+=2) {
        if (arr[i] == 0) {
            
            prime.push_back(i);
            
            for (int j = i*i; j<=n; j+=i)
                arr[j] = 1;
            }
    }
    arr[1]=1;
}


int main() {

    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    algo();
    
    for(int i=sqrt(n)+1;i<=n;i++){
        if(arr[i]==0){
            prime.push_back(i);
        }
    }
    
    for(int i=0; i<prime.size(); i+=100){
        cout<<prime[i]<<"\n";
    }
    
    return 0;
}
