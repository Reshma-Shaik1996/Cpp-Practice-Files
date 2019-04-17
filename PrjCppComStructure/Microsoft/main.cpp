
#include <iostream>
#include <iomanip>
using namespace std;
struct Employee{
    string name;
    int YearBorn;
    long salary;
};


int main(int argc, const char * argv[]) {
    
   
    Employee emp[200];
    int NbEmployees, old=emp[0].YearBorn ;
     long rich = emp[0].salary ;
    string FindName;
    cout<<"\tMicrosoft Inc\n";
    cout<<"\t-------------\n";
    do{ cout<<"Enter the number of employees Max(200):";
        cin>>NbEmployees;}while(NbEmployees<1|| NbEmployees>200);
    for(int i=0; i< NbEmployees;i++){
        cout<<"Employee"<<i+1<<endl;
        cout<<"Name ";
        cin>>emp[i].name;
        do{cout<<"Year of Birth ";
            cin>>emp[i].YearBorn;} while(emp[i].YearBorn<1900 ||emp[i].YearBorn>2019);
            cout<<"Salary ";
        cin>>emp[i].salary;

    }
    cout<<"The company employess are:"<<endl;
    cout<<setw(10)<<"Names"<<setw(10)<<"Salaries"<<setw(10)<<"Year of Born"<<setw(7)<<"age"<<endl;
    
    for(int i=0; i< NbEmployees;i++){

        cout<<setw(10)<<emp[i].name<<setw(10)<<emp[i].salary<<setw(10)<<emp[i].YearBorn<<setw(7)<<2019-emp[i].YearBorn<<endl;
        
    }

    cout<<"The Richest employess are:"<<endl;
    for(int i=0; i< NbEmployees;i++){
        rich = (emp[i].salary<rich)? rich: emp[i].salary;}
    
    for(int i=0; i< NbEmployees;i++){

        if(emp[i].salary ==rich ){ cout<<setw(10)<<emp[i].name<<setw(10)<<emp[i].salary<<setw(10)<<emp[i].YearBorn<<setw(7)<<2019-emp[i].YearBorn<<endl;}
    }
    cout<<"The oldest employess are:"<<endl;
    for(int i=0; i< NbEmployees;i++){
        
        old=(emp[i].YearBorn >old)? old: emp[i].YearBorn;
    }
    for(int i=0; i< NbEmployees;i++){
        
        if(emp[i].YearBorn==  old){ cout<<setw(10)<<emp[i].name<<setw(10)<<emp[i].salary<<setw(10)<<emp[i].YearBorn<<setw(7)<<2019-emp[i].YearBorn<<endl;}
    }
    
    cout<<"Enter the name of the employee to Find :";
    cin>>FindName;
    for(int i=0; i< NbEmployees;i++){
        if(FindName== emp[i].name){
            cout<<"Employee Found,"<<endl;
cout<<setw(10)<<emp[i].name<<setw(10)<<emp[i].salary<<setw(10)<<emp[i].YearBorn<<setw(7)<<2019-emp[i].YearBorn<<endl;
        }
        
    }
    
    
    return 0;
  
}
