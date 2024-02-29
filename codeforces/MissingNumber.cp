//
//  main.cpp
//
//  Created by Mahjabin Mim on 10/9/22.
//

#include <bits/stdc++.h>

using namespace std;

int main() {

    long long n,x,y,sum;
    cin>>n;
    
    sum=0;
    for(int i=1; i<n; i++){
        cin>>x;
        sum+=x;
    }
    
    y=(n*(n+1))/2-sum;
    cout<<y<<endl;

    return 0;
}
