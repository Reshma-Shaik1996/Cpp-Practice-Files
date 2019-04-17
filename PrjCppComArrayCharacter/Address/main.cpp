

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    cout<<"\tCONTACTS MANAGER\n";
    cout<<"\t----------------\n";
    char Fullname[50], Address[100], CPPC[100], FName[25], LName[25], City[25], province[25], Postalcode[25];
    short n=0;
    cout<<"Enter your first name and Last Name (Seperated by comma):";
   // cin>>Fullname; // full name in getline
    cin.getline(Fullname,50);
    cout<<"Enter your Address:";
    cin>>Address;
    cout<<"Enter your City, Province , postal Code (Seperated by comma):";
    cin>>CPPC;
    for (int i=0; i<strlen(Fullname); i++) {
        Fullname[i]= tolower(Fullname[i]);
       
    }
    while (Fullname[n]!= ',') {
        n++;
    }
    strncpy(FName,Fullname,n);
    FName[0]= toupper(FName[0]);
    int j=0;
    for (int i=n+1; i< strlen(Fullname); i++) { // remaining name to lname
        LName[j]= Fullname[i];
        
        j++;
    }
    LName[0]= toupper(LName[0]); //Last Name First Letter to uppercase
    //city  lower case
    for (int i=0; i<strlen(CPPC); i++) {
        CPPC[i]= tolower(CPPC[i]);
        
    }
    int c=0;       // first c=0
    while (CPPC[c]!= ',') {
        c++;
    }
    

    strncpy(City, CPPC, c);        //copy city   output
    
    City[0]= toupper(City[0]);     //uppercase conversion

    int p=c;      //second c is continuing   -- c is the first for province
    while (CPPC[p+1]!= ',') {
        p++;     // p is the end of province
    }
    
    
    int h=0;
    for (int i=c+1; i<= p; i++) {
        province[h]= CPPC[i];
        
        h++;
    }
     province[0]= toupper(province[0]);     //uppercase conversion
    // p+1 is the start of the postal
    
    
    while (CPPC[c]!= '\0') {    // c is continuing and ends at \0
        c++;
    }
    int t =0;
    for (int i=p+2; i<c ; i++) {
        Postalcode[t]= CPPC[i];
        
        t++;
    }
     Postalcode[0]= toupper(Postalcode[0]);     //uppercase conversion
    cout<<"Thanks your information is saved as:"<<endl;
    cout<<"-First name:"<<FName<<endl;
    cout<<"-Last name:"<<LName<<endl;
    cout<<"-Adress:"<<Address<<endl;
    cout<<"-City:"<<City<<endl;
    cout<<"-Province:"<<province<<endl;
    cout<<"-Postal Code:"<<Postalcode<<endl;



    return 0;
}
