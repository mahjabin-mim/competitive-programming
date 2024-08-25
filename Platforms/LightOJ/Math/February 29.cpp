/*
Author: Mahjabin7
Date: 21/05/24
*/
#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp> 
#define optimized ios::sync_with_stdio(false); cin.tie(0);

using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

#ifndef ONLINE_JUDGE
#include "debug.h"
#else
#define debug(...) 42
#endif

int main() 
{
    optimized
    int t;
    cin>>t;

    int cs=1;
    while(t--){
        string smonth, emonth;
        char c;
        int sdate, edate, syear, eyear;
        cin>>smonth>>sdate>>c >>syear;
        cin>>emonth>>edate>>c>>eyear;
        
        if(smonth=="January" || smonth=="February"){
            syear=syear;
        }else{
            syear++;
        }

        if (emonth=="January" || (emonth=="February" && edate<29)){
            eyear--;
        }else{
            eyear=eyear;
        }

        int v4 = eyear/4 - (syear-1)/4;
        int v400 = eyear/400 - (syear-1)/400;
        int v100 = eyear/100 - (syear-1)/100;
        int total = v4+v400-v100;
        cout<<"Case "<<cs<<": "<<total<<endl;
        cs++;
    }
 
    return 0;
}