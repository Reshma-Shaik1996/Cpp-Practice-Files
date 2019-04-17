
#include <iomanip>

#include <iostream>

using namespace  std;
struct Student{
    
    string Name, BirthDate ;
    int Age,day,year,number,Month;
    float Average;
    
};  //end of struct
int main() {
    int option,IndexOfStudent=0;
    
{cout<<"\tCOLLEGE LASALLE\n";
    cout<<"\t---------------\n";
    
    cout<<"1-Add a New Student";
    cout<<"2-Display all Student";
    cout<<"3-Find a Student";
    cout<<"4-Quit";

    cout<<"Please enter the option(1-4): ";
 Student student[5][IndexOfStudent];
    switch (option) {
            
        case 1:
            
        {
            cout<<"Add a New Student";
            
           
           
                
                cout<<"Student"<<IndexOfStudent+1<<":";
                cout<<"Number :";
                cin>>student[0][IndexOfStudent].number;
                cout<<"Name :";
                cin>>student[1][IndexOfStudent].Name;
                do{
                    cout<<" Birth Day :";
                    cin>>student[2][IndexOfStudent].day;  }while (student[2][IndexOfStudent].day<1 || student[2][IndexOfStudent].day>31 );
                do{      cout<<"Month :";
                    cin>>student[3][IndexOfStudent].Month;    }while (student[3][IndexOfStudent].Month<1 ||student[3][i].Month>12);
                do{  cout<<"Year :";
                    cin>>student[4][i].year;  }while (student[4][i].year<1900 || student[4][i].year>2019  );
                
                
                cout<<"Average :";
                cin>>student[5][i].Average;
            IndexOfStudent++;
            
            }
            
            break;
        case 2:
        { cout<<"Display all Student";
            
            cout<<setw(5)<<"Numbers"<<setw(10)<<"Name"<<setw(15)<<"Birth Date"<<setw(10)<<"Age"<<setw(10)<<"Average"<<endl;  // Heading display
            for (int i=0; i<n; i++)
            {
                
               
                cout<<setw(5)<< student[0][i].number<<setw(10)<<student[1][i].Name<<setw(10)<<student[2][i].day<<"/"<<student[3][i].Month<<"/"<<student[4][i].year<<setw(5)<< student[6][i]. Age<<setw(7)<<student[5][i].Average<<endl;         //output
            }
        
        } break;
        case 3:
            cout<<"Find a Student";
            break;
        case 4:
        
    cout<<"Are you sure you want to quit?";
        
        
            break;
        default:
            cout<<"Please enter the valid option";
            break;
    }
    return 0;
}
    
