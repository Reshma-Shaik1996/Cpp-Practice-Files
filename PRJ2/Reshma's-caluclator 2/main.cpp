#include <stdlib.h>
#include <iostream>
using namespace std;
int main() {
    float  value, divider,sub,subval1,subval2, add ,multiply ;
   

    short n,choice;     //menu choice
    char option ;     //option for yes or no
    
    
    do{
        option =0;// Reseting the option value
        cout<<"\t Caluclator by Reshma\n";
        cout<<"\t----------   --------\n";

        cout<<"1- Addition\n";
    cout<<"2- Division\n";
    cout<<"3- Subtraction\n";
    cout<<"4- Multiplication\n";
    cout<<"5- Quit\n";
        cout<<"Enter your choice(1-5) :";
        cin>>choice;
         
    switch (choice) {
        case 1:
            do{
                  system("cls");
                cout<<"\t Caluclator\n";
            cout<<"\t ----------\n";
            cout<<"\t Addition\n";
            cout<<" Enter the number of values to add :";
            cin>>n;
                add=0;
                    for (int i=1; i<=n; i++) {
                cout<<"Value "<<i<<":";
                cin>>value;
                        
                        add=add+value;
            }
            cout<<"The Result is "<<add<<endl;
           
                do{
                    cout<<"Would you like to do an other addition? (Y / N) ";
                cin>>option;
                }while(!(option=='y'||option=='Y' || option=='n'||option=='N'));

            }while(option=='y'||option=='Y');
          
                break;
        case 2:
            do{
                  system("cls");
                cout<<"\t Caluclator\n";
                cout<<"\t ----------\n";
                cout<<"\t Division\n";
                cout<<" Enter the  value to Divide :";
                cin>>value;
                cout<<" Enter the  value of divisor :";
                cin>>divider;
                float result = (value/divider);
                cout<<"The Result is "<<result<<endl;
                do{
                    cout<<"Would you like to do an other division? (Y / N) ";
                cin>>option;
                }while(!(option=='y'||option=='Y' || option=='n'||option=='N'));

            }while(option=='y'||option=='Y');
            
                break;
            case 3:
            do{
                  system("cls");
            cout<<"\t Caluclator\n";
            cout<<"\t ----------\n";
            cout<<"\t Subtraction\n";
            cout<<" Enter the value 1 ";
            cin>>subval1;
            cout<<" Enter the value 2 ";
            cin>>subval2;
            sub= subval1-subval2;
            cout<<" The result is "<<sub<<endl;
                do{
                    cout<<"Would you like to do an other subtraction? (Y / N) ";
                cin>>option;
                }while(!(option=='y'||option=='Y' || option=='n'||option=='N'));

            }while( option=='y'||option=='Y');
           
            break;
        case 4:
            do{
                  system("cls");
                cout<<"\t Caluclator\n";
                cout<<"\t ----------\n";
                cout<<"\t Multiplication\n";
                cout<<" Enter the number of values to Multiply :";
                cin>>n;
               multiply=1;
                for (int i=1; i<=n; i++) {
                    cout<<"Value "<<i<<":";
                    cin>>value;
                    
                    multiply=multiply*value;
                }
                cout<<"The Result is "<<multiply<<endl;
                do{ cout<<"Would you like to do an other Multiplication? (Y / N) ";
                    cin>>option;
                    
                }while(!(option=='y'||option=='Y' || option=='n'||option=='N'));
                
            }while(option=='y'||option=='Y');
           
            break;
            case 5:
            system("cls");

            cout<<" You have quit the Caluclator..!!"<<endl;// To quit
            cout<<" Bye bye :)";
            break;
            
    }//end switch choice
        system("cls");

}while(option=='n'||option=='N'); // end od do-while

    return 0;
}
