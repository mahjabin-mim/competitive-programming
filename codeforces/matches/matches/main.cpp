//
//  main.cpp
//  matches
//
//  Created by Mahjabin Mim on 9/24/22.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {

    int t,a,b,i,j,sum,count;
    string str,temp;
    
    cin>>t;
    
    for(i=1;i<=t;i++){
        
        cin>>a>>b;
        
        sum = a+b;
        str = to_string(sum);
        count=0;

        for(j=0;j<str.length();j++){
            
            temp=str[j];
            
            if(temp=="0"){
                count+=6;
            }else if(temp=="1"){
                count+=2;
            }else if(temp=="2"){
                count+=5;
            }else if(temp=="3"){
                count+=5;
            }else if(temp=="4"){
                count+=4;
            }else if(temp=="5"){
                count+=5;
            }else if(temp=="6"){
                count+=6;
            }else if(temp=="7"){
                count+=3;
            }else if(temp=="8"){
                count+=7;
            }else if(temp=="9"){
                count+=6;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
