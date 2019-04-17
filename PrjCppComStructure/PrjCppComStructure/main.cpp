

#include <iostream>
using namespace std;
struct Employee{
    string Name;
    int Age;
    long Salary;
    
};

Employee Findricher(Employee Emp1, Employee Emp2){
    if(Emp1.Salary>Emp2.Salary){
        return Emp1;
    }
    else
    {
        return Emp2;
    }
}

int main(int argc, const char * argv[]) {
    
    Employee Emp1,Emp2,max;
    Emp1.Name="Reshma";
    Emp1.Age=23;
    Emp1.Salary=10;
    cout<<"The name of the Employee 1 is "<<Emp1.Name<<"\n Age is"<<Emp1.Age<<endl;
    cout<<"The salary is $"<<Emp1.Salary<<endl;
    
    cout<<"Enter the name of the Employee 2: ";
    cin>>Emp2.Name;
    cout<<"Enter the Age of the Employee 2: ";
    cin>>Emp2.Age;
    cout<<"Enter the Salary of the Employee 2: ";
    cin>>Emp2.Salary;
    
    cout<<"The name of the Employee 2 is "<<Emp2.Name<<"\n Age is"<<Emp2.Age<<endl;
    cout<<"The salary is $"<<Emp2.Salary<<endl;
    
   /* Emp2=Emp1;
    cout<<"The name of the Employee 2 is "<<Emp2.Name<<"\n Age is"<<Emp2.Age<<endl;
    cout<<"The salary is $"<<Emp2.Salary<<endl;  */
    
   max= Findricher(Emp1, Emp2);
    cout<<"The name of the Richest Employee is "<<max.Name<<"\n Age is"<<max.Age<<endl;
    cout<<"The salary is $"<<max.Salary<<endl;
    
    return 0;
}
