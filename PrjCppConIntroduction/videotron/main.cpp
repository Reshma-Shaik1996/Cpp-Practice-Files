//
//  main.cpp
//  videotron
//
//  Created by Admin on 2019-02-01.
//  Copyright © 2019 Admin. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    string name,gender ;
    cout<< "\tVIDEOTRON\n";
    cout<< "\t---------\n";
    cout<< "Enter your name: ";
    cin>> name;
    cout<< "Enter your Gender: ";
    cin>> gender;
    if (gender== "F" || gender== "f") {
        gender = "Miss";
    }
    else
        gender="sir";
    cout<< gender<< "." <<name<<" , you are welcome.!";

    return 0;
}
// \t is used to go to a next tab
// #include <string> in c++ to include string variable
