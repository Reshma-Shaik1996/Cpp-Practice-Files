//
//  main.cpp
//  Menu
//
//  Created by Admin on 2019-02-12.
//  Copyright © 2019 Admin. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int answer;
    do{
        cout<<"\t MAIN-MENU\n";
        cout<<"\t ----------\n";
        cout<<"1-choice 1:";
        cout<<"2-choice 2:";
        cout<<"3-choice 3:";
        cout<<"Enter your choice(1-3):";
        
        cin>>answer;
        
    }while (answer<1|| answer>3);
    cout<<"You choose "<<answer<<" Good choice!";
    return 0;
}
