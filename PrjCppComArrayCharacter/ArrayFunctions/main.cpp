
#include <stdlib.h>
#include <iostream>
using namespace std;
int main() {
    char FirstName[25] = "bill";
    char LastName[25] = "gates";
   char FullName[50];
    FirstName[0] =toupper(FirstName[0]);
    LastName[0]= toupper(LastName[0]);
   // cout<<"Your Full name is "<<FirstName <<" "<<LastName<<endl;
    strcpy(FullName,FirstName);
   strcat(FullName, " ");
    strcat(FullName, LastName);
    
  cout<<"Your Full name is "<< FullName ;
    return 0;
    
}

