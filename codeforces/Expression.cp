#include <bits/stdc++.h>
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;

int main()
{ 
    optimized
    int a,b,c;
    cin>>a>>b>>c;
    
    int arr[5];
    arr[0]=a+b*c; 
    arr[1]=a*(b+c); 
    arr[2]=a*b*c; 
    arr[3]=(a+b)*c; 
    arr[4]=a+b+c; 
    
    sort(arr,arr+5);
    cout<<arr[4]<<endl;
    
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	