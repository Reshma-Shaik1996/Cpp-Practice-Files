
#include <iomanip>

#include <iostream>
using namespace std;

    struct Student{
        
        string Name, BirthDate ;
        int Age,day,year,number,Month;
        float Average;

    };  //end of struct
int main() {

    Student student[6][20];

  int n,num,oldest;
    float best, worst;
    string result;
    cout<<"\tCOLLEGE LASALLE\n";
    cout<<"\t---------------\n";
   do { cout<<"Enter the number of students Max(20) :";
    cin>>n;   //number of students
   }while (n>20|| n<2);
        for (int i=0; i<n; i++) {
     
        cout<<"Student"<<i+1<<":";
        cout<<"Number :";
            cin>>student[0][i].number;
         cout<<"Name :";
       //cin>>student[1][i].Name;
            getline(cin,student[1][i].Name);
            cin.ignore();
            do{
                cout<<" Birth Day :";
 cin>>student[2][i].day;  }while (student[2][i].day<1 || student[2][i].day>31 );
    do{      cout<<"Month :";
  cin>>student[3][i].Month;    }while (student[3][i].Month<1 ||student[3][i].Month>12);
            do{  cout<<"Year :";
                cin>>student[4][i].year;  }while (student[4][i].year<1900 || student[4][i].year>2019  );
                
            cin.ignore();
        cout<<"Average :";
        cin>>student[5][i].Average;
        
      student[6][i]. Age= (2019-student[4][i].year); // Age caluclation
        
    }
    
    cout<<"Enter the 'Number' of the student to Find :";
    cin>>num  ;
    for (int i=0; i<n; i++) {

        result=(num==student[0][i].number)? "Yes, This student exist in the list" : "No, This student does not exist in the list";  // searching answer
    }
    cout<<result<<endl;
    cout<<"The Class List is:"<<endl;
    best=worst=student[5][0].Average;//INITIALISING THE VARIABLRS
    oldest=student[6][0]. Age;
   cout<<setw(5)<<"Numbers"<<setw(10)<<"Name"<<setw(15)<<"Birth Date"<<setw(10)<<"Age"<<setw(10)<<"Average"<<endl;  // Heading display
    for (int i=0; i<n; i++)
    {
      
        if (num==student[0][i].number) {// To highlight the number
            cout<<"---------------------------------------------------\n";}
 cout<<setw(5)<<student[0][i].number<<setw(10)<<student[1][i].Name<<setw(10)<<student[2][i].day<<"/"<<student[3][i].Month<<"/"<<student[4][i].year<<setw(5)<< student[6][i]. Age<<setw(7)<<student[5][i].Average<<endl;         //output
        
        if (num==student[0][i].number) {
            cout<<"--------------------------------------------------\n";
        }
        best=best>student[5][i].Average?best:student[5][i].Average;  //best
        worst=worst<student[5][i].Average?worst:student[5][i].Average;  //worst
        oldest=oldest>student[6][i]. Age?oldest:student[6][i]. Age;  // oldest
    }
   
    cout<<"The best is:"<<best<<endl  ;
    cout<<"The worst is:" <<worst <<endl ;
    cout<<"The Oldest is:"<<oldest    ;

    return 0;
}
