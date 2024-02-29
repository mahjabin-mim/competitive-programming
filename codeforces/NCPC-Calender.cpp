#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp> 
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

bool is_leap_year(int year) {
    return (year%4 == 0 && year%100 != 0) || (year%400 == 0);
}

int main()
{
    optimized
    int t;
    cin>>t;

    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        int year;
        int days;
        if(s1[4]=='2'){
            string x="";
            x+=s1[6];
            x+=s1[7];
            x+=s1[8];
            x+=s1[9];
            year=stoi(x);
            days = is_leap_year(year) ? 29 : 28;
        }else if(s1[4]=='4' || s1[4]=='6' || s1[4]=='9' || (s1[3]=='1' && s1[4]=='1')){
            days = 30;
        }else{
            days = 31;
        }

        string arr[7]={ "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat" };
        int bar;
        for(int i=0; i<7; i++){
            if(s2==arr[i]){
                bar=i;
                break;
            }
        }

        string temp="";
        temp+=s1[0];
        temp+=s1[1];
        int date=stoi(temp);
        if(date%7==0){
            bar++;
        }else if((date%7)>1){
            for(int i=(date%7)-1; i>=1; i--){
                if(bar==0){
                    bar=6;
                }else{
                    bar--;
                }
            }  
        }
        
        cout << "|---------------------------|\n";
        cout << "|Sun|Mon|Tue|Wed|Thu|Fri|Sat|\n";
        cout << "|---------------------------|\n";

        int current_day = 1;
        for(int i=0; i<5; i++) {
            cout<<"|";
            int ind=0;
            if(i==0 && bar>4 && days==31){
                if(bar==5){
                    cout<<setw(3)<<"31";
                    cout<<"|";
                    ind=1;
                }else{
                    cout<<setw(3)<<"30";
                    cout<<"|";
                    cout<<setw(3)<<"31";
                    cout<<"|";
                    ind=2;
                }
            }else if(i==0 && bar>5 && days==30){
                cout<<setw(3)<<"30";
                    cout<<"|";
                    ind=1;
            }

            if(i==0){
                for(int j=ind; j<7; j++) {
                    if(i==0 && j<bar) {
                        cout<<" - ";
                    }else if(current_day <= days) {
                        cout<<setw(3)<<current_day++;
                    } else {
                        cout<<" - ";
                    }
                    cout<<"|";
                }
            }else{
                for(int j=0; j<7; j++) {
                    if(i==0 && j<bar) {
                        cout<<" - ";
                    }else if(current_day <= days) {
                        cout<<setw(3)<<current_day++;
                    } else {
                        cout<<" - ";
                    }
                    cout<<"|";
                }
            }
            cout<<"\n|---------------------------|\n";
        }
        cout<<endl;
    }
    
    return 0;
}