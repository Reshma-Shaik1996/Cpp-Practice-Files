
#ifndef Header_h
#define Header_h
#include <iostream>
using namespace std;

void DisplayTitle(string title){
    cout<<"\t"<<title<<endl;
}
int ReadNbStdent(){
    int n;
    do{
        cout<<"Enter the number of students (Max 20): ";
        cin>>n;
    } while (n<2 || n>20);
    return n;
}


#endif /* Header_h */
