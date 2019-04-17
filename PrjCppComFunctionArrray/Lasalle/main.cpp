

#include "LasalleH.h"
int main(int argc, const char * argv[]) {
    int NbStudent;
    float grade[20] ;
    string name[20];
    PrintHeading("LaSalle College");
   NbStudent= NoOfStudent( );

        ReadStudent(name, grade, NbStudent)  ;
    DisplayStudent(name, grade, NbStudent);
    Average(grade, NbStudent);
    StudentComparision(name, grade, NbStudent);
    return 0;
}
