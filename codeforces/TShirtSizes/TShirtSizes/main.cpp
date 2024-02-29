//
//  main.cpp
//  TShirtSizes
//
//  Created by Mahjabin Mim on 10/11/22.
//

#include <iostream>
//#include <sstream>
//#include<string>

using namespace std;

int main() {
   
    int t,i;
    string a,b,va,vb,s;
    
    cin>>t;
    for(i=1; i<=t; i++){
        
//        getline(cin, s);
//        stringstream ss(s);
//        ss>>a>>b;
        cin>>a>>b;
        //cout<<a<<endl;
        //cout<<b<<endl;
        
        if(a.length() > b.length()){
            
            va = a[a.length()-1];
            
            if(va == "S"){
                cout<<"<\n";
            }else if(va == "L"){
                cout<<">\n";
            }
        }
        
        else if(a.length() == b.length()){
            
            va = a[a.length()-1];
            vb = b[b.length()-1];
            
            if(va == "S" && vb == "L"){
                cout<<"<\n";
            }
            else if(va == "L" && vb == "S"){
                cout<<">\n";
            }
            
            else if(a == b){
                cout<<"=\n";
            }
            
            else if(va == "L" && vb == "M"){
                cout<<">\n";
            }
            else if(va == "S" && vb == "M"){
                cout<<"<\n";
            }
            else if(va == "M" && vb == "L"){
                cout<<"<\n";
            }
            else if(va == "M" && vb == "S"){
                cout<<">\n";
            }
        }
        
        else if(a.length() < b.length()){
            
            vb = b[b.length()-1];
            
            if(vb == "S"){
                cout<<">\n";
            }else if(vb == "L"){
                cout<<"<\n";
            }
        }
    }
    
    return 0;
}
