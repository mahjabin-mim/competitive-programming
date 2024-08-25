#include <bits/stdc++.h>
#include <iostream>
#include <set>

using namespace std;

int main()
{   
    //declaration of set
    set<int> set1{ 1, 2, 3, 4, 5 };
    cout<<"Set1 = ";
    for(auto i=set1.begin(); i!=set1.end(); i++){
      cout<<*i<<" ";
    }
    cout<<endl;
    cout<<"Size1 = "<<set1.size()<<endl;
    
    
    //user input
    int n;
    cin>>n;
    set<int> set2;
    for(int i=0; i<n; i++){
      int x;
      cin>>x;
      set2.insert(x);
    }
    cout<<"Set2 = ";
    for(auto i=set2.begin(); i!=set2.end(); i++){
      cout<<*i<<" ";
    }
    cout<<endl;
    cout<<"Size2 = "<<set2.size()<<endl;

    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
