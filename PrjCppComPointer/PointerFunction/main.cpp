

#include <iostream>
using namespace std;
struct student{
    string Name;
    float Grade;
};
void ReadStudent( student *stud1, student *stud2){
    cout<<"Student 1\n";
    cout<<"Name \n";
    cin>> (*stud1).Name;
    cout<<"Grade \n";
    cin>> (*stud1).Grade;
    
    cout<<"Student 2\n";
    cout<<"Name \n";
    cin>> (*stud2).Name;
    cout<<"Grade \n";
    cin>> (*stud2).Grade;
}
int main(int argc, const char * argv[]) {
    student st1,st2,best;
    ReadStudent(&st1, &st2)   ;
    cout<<st1.Name<<"-"<<st1.Grade<<endl;
    cout<<st1.Name<<"-"<<st1.Grade<<endl;

    return 0;
}
//The type of the address is the pointer
