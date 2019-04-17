//
//  main.cpp
//  Caluclator
//
//  Created by Admin on 2019-02-01.
//  Copyright © 2019 Admin. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int val1, val2;
    char operatoin;
    cout<< "       CALUCLATOR"<<endl ;
    cout<< "       -----------"<<endl;
    cout<< "Enter value 1:";
    cin>> val1;
    cout<< "Enter value 2:";
    cin>> val2;
    cout<< "Enter the operator(+,-,/,*, %,\\)";
    cin>> operatoin;

    if( operatoin== '+'){
        cout<< "The addition of "<< val1<<" and " <<val2<< " is " <<val1+val2<<endl;}
    else if (operatoin== '-')
        cout<< "The subtractoin of "<< val1<<" and " <<val2<< " is " <<val1-val2<<endl;
    else if (operatoin== '/')
cout<< "The divison of "<< val1+0.0<<" and " <<val2<< " is " <<val1/val2<<endl;
    else if (operatoin== '*')
cout<< "The multiplication of "<< val1<<" and " <<val2<< " is " <<val1*val2;
    else if (operatoin== '%')
        cout<< "The modulo of "<< val1 <<" and " <<val2<< " is " <<  (val1%val2);

    else if (operatoin== '\\'){
     //   float back= (val1+0.0)/val2;
        float back =  (float)val1/ val2; // casting the variable
        // (type) variable

        cout<< "The  float division of "<< val1 <<" and " <<val2<< " is " <<  back;
    }


    return 0;
}
