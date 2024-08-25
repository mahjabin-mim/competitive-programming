//
//  main.cpp
//  manipulateStrings
//
//  Created by Mahjabin Mim on 9/23/22.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    string a,b;
    
    cin>>a>>b;
    
    cout<<a.size()<<" "<<b.size()<<endl;
    cout<<a+b<<endl;
    
    char temp;
    temp=b[0];
    b[0]=a[0];
    a[0]=temp;
    
    cout<<a<<" "<<b<<endl;
    return 0;
}
