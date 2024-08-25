/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{

    int n,h,w,row,col,ans;
    cin>>n;
    cin>>h;
    cin>>w;
    
    row = n-h;
    col = n-w;
    ans = (row+1)*(col+1);
    cout<<ans<<endl;

    return 0;
}
