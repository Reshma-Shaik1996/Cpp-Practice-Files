
#ifndef LasalleH_h
#define LasalleH_h

#include <iostream>
#include <iomanip>

using namespace std;
void PrintHeading(string heading){
    
    cout<<"\t"<<heading<<"\n";
    cout<<"\t____________\n";
}

int NoOfStudent (){
    int num;

    do{
        cout<<"Enter number of students Max(20):";
        cin>>num;
    } while(num<2 || num>20);
    return num;
}
void ReadStudent(string name[],float grade[], int num)
{
    
    for (int i=0; i<num; i++){
        cout<<"Student "<<i+1<<endl;
        cout<<"Name: ";
 cin>> name[i];
    
    do{cout<<"Grade: ";
        cin>>grade[i];
        
    } while (grade[i]<0|| grade[i]>100);
    
    }}

void DisplayStudent(string name[20], float grade[20], int num){
    
    
    cout<<"The Class"<<endl;
     cout<<setw(10)<<"Numbers"<< setw(10)<<"Names"<<setw(10)<<"grades"<<endl;
    for(int i=0; i<num;i++){
        cout<<setw(10)<<i+1<< setw(10)<<name[i]<<setw(10)<<grade[i]<<endl;

    }}

void Average(float grade[20], int num){
    float sum=0,avg;
    cout<<"The class Average is:";
    for(int i=0; i<num;i++){
        sum+= grade[i];
        
    }
    avg= sum/num;
    cout<<avg<<endl;
   
}

void StudentComparision(string name[],float grade[], int num){
    float best= grade[0],worst= grade[0];
    
    for(int i=0; i<num;i++){
        best = (best> grade[i]) ?best :grade[i];
        worst = (grade[i]> worst) ?worst :grade[i];

    }

    cout<<"The Best students are:"<<endl;
    
    
    cout<<setw(10)<<"Numbers"<< setw(10)<<"Names"<<setw(10)<<"grades"<<endl;
    
    for(int i=0; i<num;i++){
if( best==  grade[i]){
        cout<<setw(10)<<i+1<< setw(10)<<name[i]<<setw(10)<<best<<endl;}}

    cout<<"The worst students are:"<<endl;
    for(int i=0; i<num;i++){
    if( worst==  grade[i]){
        cout<<setw(10)<<i+1<< setw(10)<<name[i]<<setw(10)<<grade[i]<<endl;
    }
    }
    }



#endif /* LasalleH_h */
