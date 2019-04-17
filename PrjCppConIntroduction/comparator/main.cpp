//
//  main.cpp
//  comparator
//
//  Created by Admin on 2019-02-05.
//  Copyright © 2019 Admin. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    string name;
    char gender,grade;
    float marks, mid,final,prj1, prj2;
    
    int evaluator;
    cout<<  "    College Lasalle\n";
    cout<<  "    ---------------\n";
    cout<<  "Enter your Name: " ;
    //cin>> name;
    getline(cin,name);
    cout<< "Enter your Gender: ";
    cin>> gender;
    
    cout<< "Please Enter 1 to choose Evalutor 1\n or Enter 2 to choose Evaluator 2:   ";
    cin>> evaluator;
    switch (evaluator){
            case 1:
        {
            cout<< "Enter your Midterm Marks: : ";
            cin>> mid;
            cout<< "Enter your Final Marks: ";
            cin>> final;
            cout<< "Enter your project 1 Marks: ";
            cin>> prj1;
            cout<< "Enter your project 2 marks: ";
            cin>> prj2;
            marks=mid*0.2 + final*0.4  +prj1 *0.15 +prj2*0.25;
            cout<< marks;
    
    if (gender=='f'|| gender=='F')
    {cout<< "Miss."<<name;}
    else
    { cout<< "sir."<<name;}
    
     if (marks<100 && marks>=90) {
        cout<< "your  grade is 'A' ";
    }
   else if (marks<90 && marks>=80) {
        cout<< " your  grade is 'B' ";
    }
   else if ( marks>=70) {
       cout<< " your  grade is 'C'";
   }
   else if ( marks>=60) {
       cout<< " your  grade is 'D' ";
   }
   else if (marks<60 && marks>=50) {
       cout<< " your  grade is 'E' ";
   }
    else
    { cout<<" Sorry, you have failed!!\n";}
            break;
        }
            
        case 2:
            
        {cout<< "Enter your Grade (A or B or C or D or E or F): ";
            cin>>grade;
           
          
            if (gender=='f'|| gender=='F')
            {cout<< "Miss."<<name;}
            else
            { cout<< "sir."<<name;}
            
            switch (grade){
                case 'a' :
                case 'A':
                    cout<< "your  marks is between 90 to 100 ";
                break;
                    
                case 'b' :
                case 'B':
                    cout<< "your  marks is between 80 to 90 ";
                    break;
                case 'c' :
                case 'C':
                    cout<< "your  marks is between 80 to 70 ";
                    break;
                case 'D' :
                case 'd':
                    cout<< "your  marks is between 60 to 70 ";
                    break;
                case 'F':
             cout<<" Sorry, you have failed!!\n";}
            break;
        }
    }
    return 0;
}
// Name  : Bill Gates Error- because of the space
//    getline(cin,name);

