

#include <iostream>
using namespace std;

int main() {
    string name;
    char  marriage, gender;
    int age, child;
    float income,taxM,taxC,taxG,Ttax,Ptax;
    cout<<"\t REVENUE QUEBEC\n";
    cout<<"\t ---------------\n";
    cout<<"Enter your Name: ";
    
     getline(cin,name);
    do{
    cout<<"Select your gender(f/m):";
        cin>>gender;
    }while(!(gender== 'f'|| gender=='F'|| gender=='M'|| gender=='m'));
    do{cout<<"Enter your Age(15 to 65):";
        cin>>age;
        
    }while( age<15 || age>65);
    do{
        cout<<"Are you Married(Y/N):";
        cin>>marriage;
        
    }while(!( marriage=='Y' || marriage=='y' || marriage=='N'|| marriage=='n'));
    
           do{
               cout<<"Enter your Gross Income $:";
               cin>>income;
               
           }while( income<0 );
           do{
               cout<<"How many Children do you have? (Max 10):";
               cin>>child;
               
           }while( child<0 || child>10);
           cout<<"Thanks,";
          if(gender=='f'|| gender=='f')
              cout<<"Madam";
    else
        cout<<"Sir.";

    cout<<" "<<name<<" ,";
    cout<<"Your total Income is $"<<income<<endl;
   
    taxG=(age>18)?((gender=='M'|| gender=='m')? 40: 30):0;
        cout<<"Gender,"<<taxG;
    
        taxM=(marriage=='Y'||marriage=='y')?10:20;
        cout<<"Marriage,"<<taxM;

        taxC=child*10;
        cout<<"child,"<<taxC;

        Ptax=taxG+taxM-taxC;
        
  
    
    Ttax=Ptax*0.01 *income;
    cout<<"The total deduction is $"<<Ttax<<endl;
    cout<<"Your Annual net salary is $"<<(income-Ttax)<<endl;

    return 0;
}
// toupper(gernder)=='F'
