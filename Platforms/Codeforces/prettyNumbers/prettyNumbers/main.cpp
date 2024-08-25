//
//  main.cpp
//  prettyNumbers
//
//  Created by Mahjabin Mim on 9/23/22.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    int t,l,r,i,j,count;
    string temp,lastDigit;
    
    cin>>t;
    
    for(i=1;i<=t;i++){
        
        cin>>l>>r;
        count=0;
        
        for(j=l;j<=r;j++){
          
            temp = to_string(j); //32
            lastDigit = temp[temp.length()-1];

            if(lastDigit=="2" || lastDigit=="3" || lastDigit=="9"){
                count+=1;
            }
        }
        cout<<count<<endl;
    }
  
    return 0;
}
