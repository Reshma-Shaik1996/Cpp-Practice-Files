//
//  main.cpp
//  Revenu
//
//  Created by Admin on 2019-02-15.
//  Copyright © 2019 Admin. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    string name;
    char gender;
    float fee, total=0;
    int child;
    cout<<"\tRevenue-Quebec\n";
    cout<<"\t--------------\n";
    cout<<"Enter your Name:";
    cin>>name;
    
    

    
    do{
        cout<<"Enter your Gender(f/m):";
        cin>>gender;
    }while(!(gender=='f'||gender=='F'||gender=='m'||gender=='M'));
    //while(gender!='f' && gender!='m'&& gender!='F' && gender!='M');
    if (gender=='f'||gender=='F')
        cout<<"Madam."<<name;
    if (gender=='m'||gender=='M')
        cout<<"Sir."<<name;
    
    do {
        cout<<"How many Children?";
        cin>>child;

    }while (child<0 || child >5);

    
        for (int i=1; i<=child; i++) {
            do{
            cout<<"Fee for child "<<i<<" ";
            cin>>fee;
            total= total+fee;

            } while (fee<0);}
    cout<<"Total Fee is "<<total;

    return 0;
}
