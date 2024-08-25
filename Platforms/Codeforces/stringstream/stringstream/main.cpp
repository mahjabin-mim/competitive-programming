//
//  main.cpp
//  stringstream
//
//  Created by Mahjabin Mim on 9/24/22.
//

//#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
#include<string>

using namespace std;

int main(int argc, const char * argv[]) {
    
    string s;
    long long n;
    char ch;
    
    cin>>s;
    
    stringstream ss(s);

    while(ss >> n){
        cout<<n<<endl;
        
        ss >> ch;
        continue;
    }
    return 0;
}
