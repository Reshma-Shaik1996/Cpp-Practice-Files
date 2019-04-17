
#include "Reshma.h"

int main(){
    int  Nb= NbStudent();
    Student std[20];

    DisplayTitle("LaSalle College");
    ReadAllStudents(std, Nb);
    DisplayStudent(std, Nb);
   DisplayBetweenYears( std,  Nb);
    return 0;

}
