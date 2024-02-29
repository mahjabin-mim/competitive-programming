/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{

    char s,t;
    cin>>s;
    cin>>t;
    
    if(s=='Y'){
          char ch = toupper(t);
          cout<<ch<<endl;
    }
    else{
        cout<<t<<endl;
    }

    return 0;
}
