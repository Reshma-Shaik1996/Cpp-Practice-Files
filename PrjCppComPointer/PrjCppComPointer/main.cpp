

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    float grade=75;
    float tabGrades[5]={70,50,10,90,50};
 //  float *ptrGrade= tabGrades; //Both declaration and intilisation at the same time
    float *ptrGrade;
    // If you are declaring and intialising seperately
   ptrGrade= tabGrades;
    cout<<*ptrGrade<<endl;
    ptrGrade++;
    cout<<*ptrGrade<<endl;
    ptrGrade++;
    cout<<*ptrGrade<<endl;
    ptrGrade++;
    cout<<*ptrGrade<<endl;
    ptrGrade++;
    cout<<*ptrGrade<<endl;
    ptrGrade++;
    cout<<"The Garbage value"<<*ptrGrade<<endl;
    
    
    int i=1;
    for (ptrGrade= &tabGrades[0]; i<=5; i++,ptrGrade++) {
        cout<<*ptrGrade<<endl;
    }
   /* cout<<"The value of Grade= "<<grade<<"\n The adress of the grade ="<<&grade<<endl;
    cout<<"The value of ptrGrade= "<<ptrGrade<<"\n The adress of the &ptrgrade ="<<&ptrGrade<<endl;

    cout<<"The value stored in the address contained by the ptrGrade *ptrGrade"<<*ptrGrade<<endl;   */
    
    
   /* cout<<"Grade="<<grade <<endl;
    cout<<"*ptrGrade="<<*ptrGrade <<endl;
    cout<<"*&Grade="<<*&grade <<endl;  */
    cout<<tabGrades<<"=="<<&tabGrades[0]<<endl;
    return 0;
}
