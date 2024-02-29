//
//  main.cpp
//  FirstandLastDigit
//
//  Created by Mahjabin Mim on 10/4/22.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    int t,n,i,f1,l1,sum;
    string str,f,l;
    cin>>t;
    
    for(i=1;i<=t;i++){
        cin>>n;
        str=to_string(n);
        
        f=str[0];
        l=str[str.length()-1];
        
        f1=stoi(f);
        l1=stoi(l);
        
        sum=f1+l1;
        cout<<sum<<endl;
    }
    return 0;
}
