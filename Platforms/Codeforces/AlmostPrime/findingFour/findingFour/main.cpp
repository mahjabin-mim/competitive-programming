//
//  main.cpp
//  findingFour
//
//  Created by Mahjabin Mim on 9/23/22.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    int t,n,i,j,count;
    string number,c,temp;
    
    cin>>t;
    
    for(i=1;i<=t;i++){
        
        cin>>n;
        number = to_string(n);
        
        count=0;
        
        for(j=0;j<number.length();j++){
            
            temp = number[j];
            
            if(temp=="4"){
                count += 1;
            }
        }
        
        cout<<count<<endl;
    }
    return 0;
}
