//
//  main.cpp
//  grade-pointers
//
//  Created by Admin on 2019-02-22.
//  Copyright © 2019 Admin. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    string result,Name;
    char name[20][20];
    float grade[20],max,min;
    
    cout<<"\tCOLLEGE LASALLE\n";
    cout<<"\t----------------\n";
    cout<<"Enter the number of students(max 20):";
    cin>>n; //n- is the number of students
    for (int i=0; i<n; i++) {//for students
        cout<<"Student "<<i;
        
                cout<<"Enter your name";
                cin>>name[i];
            
        do{
            cout<<"Enter your grade";
            cin>>grade[i];
           
        } while (grade[i]<0|| grade[i]>100);

        
        
    }
    
    for (int i=0; i<n; i++) {
        result= grade[i]>50?"Pass":"Fail";
        
                cout<<"Student Name :"<<name[i];
        cout<<"-Grade :"<<grade[i];
        cout<<"-Result :"<<result<<endl;

        
        

        }
    max=min=grade[0];
    for (int i=0; i<n; i++) {
        /*if(grade[i]> grade[i+1])
            max=grade[i];
  
        if(grade[i]< grade[i+1])
            min=grade[i];*/
        max= (max>grade[i])?max:grade[i];
        min= (min<grade[i])?max:grade[i];

    }
    cout<<"The best grades are :"<<endl;

    for (int i=0; i<n; i++) {
if(grade[i]==max)
{
    grade[i]=max;
    result= grade[i]>50?"Pass":"Fail";

    cout<<"Student Name :"<<name[i];
    cout<<", Maximum Value-"<<max<<endl;
    cout<<", Result :"<<result<<endl;

}}
        
        cout<<"The worst grades are :"<<endl;
        for (int i=0; i<n; i++) {

        if(grade[i]==min)
        {
            grade[i]=min;
            result= grade[i]>50?"Pass":"Fail";

            cout<<"Student Name :"<<name[i];
            cout<<", Minimum Value-"<<min<<endl;

            cout<<", Result :"<<result<<endl;
        }
        }

return 0;}

