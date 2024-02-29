//
//  main.cpp
//  February29
//
//  Created by Mahjabin Mim on 10/5/22.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
        int t,i;
        cin >> t;
    
        string smonth, emonth;
        char comma;
        int sdate, edate, syear, eyear;
    
        for (i = 1; i <= t; i++)
        {
            cin >> smonth >> sdate >> comma >> syear;
            cin >> emonth >> edate >> comma >> eyear;
            
            if (smonth == "January" or smonth == "February"){
                syear = syear;
            }else{
                syear++;
            }

            if (emonth == "January" or (emonth == "February" and edate < 29)){
                eyear--;
            }else{
                eyear = eyear;
            }

            int v4 = eyear / 4 - (syear - 1) / 4;
            int v400 = eyear / 400 - (syear - 1) / 400;
            int v100 = eyear / 100 - (syear - 1) / 100;

            int total = v4 + v400 - v100;
            
            cout << "Case "<<i<<": "<<total << endl;
        }
    
    return 0;
}
