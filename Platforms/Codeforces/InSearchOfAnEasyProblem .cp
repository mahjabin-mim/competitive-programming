#include <bits/stdc++.h>
#include <iostream>
#include <set>

using namespace std;

int main()
{
    int a,count=0;
    cin>>a;
    
    int arr[a];
    for(int i=0; i<a; i++){
        cin>>arr[i];
        if(arr[i]==1){
            count++;
        }
    }
    
    if(count==0){
        cout<<"EASY"<<endl;
    }else{
        cout<<"HARD"<<endl;
    }
    
    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	