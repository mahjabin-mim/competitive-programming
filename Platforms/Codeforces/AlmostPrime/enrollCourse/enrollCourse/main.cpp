//
//  main.cpp
//  enrollCourse
//
//  Created by Mahjabin Mim on 9/23/22.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    int t,n,m,k,i;
    
    cin>>t;
    
    for(i=1;i<=t;i++){
        cin>>n>>m>>k;
        
        if(n+k<=m){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}
