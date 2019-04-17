

#ifndef Reshma_h
#define Reshma_h

#include <iostream>
#include <iomanip>

using namespace std;

struct Student{
    string number,name;
    int day,month,year;
    
};

void DisplayTitle(string Title){
    cout<<"\t"<<Title<<"\n";
    cout<<"\t"<<string(Title.length(),'-')<<"\n";
}

string ReadOneNumber(){
    string  number;
    cout<<" Number :";
    cin>>number;
    return number;
}

string ReadOneName(){
    string name;
    cout<<" Name :";
    cin>> name;
    return name;
}
int ReadOneDay(int min , int max){
    int day;
    do{cout<<" Day :";
        cin>>day;} while(day<min || day> max);
    return day;
    }
int ReadOneMonth(int min , int max){
    int month;
    do{ cout<<" Month :";
        cin>> month;} while(month<min|| month>max);
    return month;
}

int ReadOneYear(){
    int year;
    cout<<" Year :";
    cin>> year;
    return year;
}
int NbStudent(){
    int Nb;
    cout<<"Enter Number of students Max(20):";
    cin>>Nb;
    return Nb;
}

void ReadAllStudents(Student std[] , int Nb){
    
    for(int i=0; i<Nb; i++){
        cout<<"Student"<<i+1<<endl;

        std[i].number= ReadOneNumber();
         std[i].name= ReadOneName();
         cout<<"Birth Date"<<endl;
        std[i].day= ReadOneDay( 1 ,  31);
        std[i].month= ReadOneMonth(1,12);
        std[i].year=ReadOneYear();

        
    }
   
}

void DisplayStudent(Student std[], int Nb){
    cout<<setw(10)<<"Number"<<setw(8)<<"Name"<<setw(12)<<"Birth-Date"<<setw(10)<<"age"<<endl;
    for(int i=0; i<Nb;i++){
cout<<"\t"<<std[i].number<<"\t"<<std[i].name<<"\t"<<std[i].day<<"/"<<std[i].month<<"/"<<std[i].year<<"\t"<<(2019-std[i].year) <<endl;

    }
}

int ReadFirstYear(){
    int year1;
    do{ cout<<"Enter First Year(1955-2002) :";
        cin>>year1;}while(year1<1955|| year1>2002);
    return year1;
}
int ReadSecondYear(){
    int year2;
    do{ cout<<"Enter Second Year(1955-2002) :";
        cin>>year2;}while(year2<1955|| year2>2002);
    return year2;
}
void DisplayBetweenYears( Student std[], int Nb){
    int FirstYear, SecondYear;
    cout<<"The display of Students between two years are";
   FirstYear = ReadFirstYear( );
    SecondYear= ReadSecondYear();
    for(int i=0; i<Nb;i++){

    if (std[i].year> FirstYear && std[i].year< SecondYear){
        cout<<setw(10)<<std[i].number<<setw(10)<<std[i].name<<setw(10)<<std[i].day<<"/"<<std[i].month<<"/"<<std[i].year<<setw(7)<<2019-std[i].year<<endl;
      
    }
    }}

#endif /* Reshma_h */

