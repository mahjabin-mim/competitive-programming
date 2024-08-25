//
//  main.cpp
//  Team
//
//  Created by Mahjabin Mim on 10/11/22.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    int t,a,b,c,i,count;
    
    cin>>t;
   
    for(i=1; i<=t; i++){
        
        cin>>a>>b>>c;
        count=0;

        if(a==1 && b==1){
            count+=1;
        }else if (b==1 && c==1){
            count+=1;
        }else if (c==1 && a==1){
            count+=1;
        }else{
            continue;
        }
    }
    
   cout<<count<<endl;
    return 0;
}
