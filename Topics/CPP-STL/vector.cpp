#include <bits/stdc++.h>
#include <iostream>
#include <set>

using namespace std;

int main()
{   
    //initializer list
    vector<int> vector1 = {1, 2, 3, 4, 5};
    cout << "vector1 = ";
    for(int i=0; i<vector1.size(); i++){
      cout<<vector1[i]<<" ";
    }

    //uniform initialization
    vector<int> vector2{6, 7, 8, 9, 10};
    cout<<"\nvector2 = ";
    for(int i=0; i<vector2.size(); i++){
      cout<<vector2[i]<<" ";
    }

    //method 3
    vector<int> vector3(5, 12);
    cout<<"\nvector3 = ";
    for(int i=0; i<vector3.size(); i++){
      cout<<vector3[i]<<" ";
    }
    
    //user input
    int n;
    cin>>n;
    vector<int> vector4;
    for(int i=0; i<n; i++){
      int x;
      cin>>x;
      vector4.push_back(x);
    }
    cout<<"\nvector4 = ";
    for(int i=0; i<n; i++){
      cout<<vector4[i]<<" ";
    }

    return 0;
}
 	 	  		 		 		 	 		 	  	   	 	
