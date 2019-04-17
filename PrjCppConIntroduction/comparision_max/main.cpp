//
//  main.cpp
//  comparision_max
//
//  Created by Admin on 2019-02-05.
//  Copyright © 2019 Admin. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    char gender;
    string name,Gen;
    int val1, val2, val3,max1;
    cout<< "     THE COMPARATOR\n";
    
    cout<< "Enter your Name: ";
    getline(cin,name);
    cout<<"Enter value 1:";
    cin>> val1;
    cout<<"select the gender (M/F):";
    cin>> gender;
    
    cout<<"Enter value 2:";
    cin>> val2;
    cout<<"Enter value 3:";
    cin>> val3;
   /* if (val1>val2)
        max=val1;
    else
        max= val2;*/
    
   max1= (max1=(val1>val2)?val1:val2)>val3?max1:val3;
    
    Gen=(Gen=="f"|| Gen=="F")? "Miss.": "Sir." ;
    cout<< Gen <<name<<" The maximum value is : "<<max1<<endl;
    cout<<"you"<<((val1>val2)?val1:val2);
    
    return 0;
}
