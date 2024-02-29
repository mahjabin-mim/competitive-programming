//
//  main.cpp
//  FourDigits
//
//  Created by Mahjabin Mim on 9/11/22.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    string n;
    cin >> n;
    
    if(n.size() == 1){
        cout << "000" << n << endl;
    }else if(n.size() == 2){
        cout << "00" << n << endl;
    }else if(n.size() == 3){
        cout << "0" << n << endl;
    }else{
        cout << n;
    }
}
