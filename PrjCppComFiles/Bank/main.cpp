

#include "Bank.h"
int main(int argc, const char * argv[]) {
    ifstream myfile;
    client tabclient[20];
    client currentClient;
    int Nb, I;
    string line;
    long bal;
    cout<<"\tRoyal Bank\n\t-----ATM----\n\n";
    myfile.open("clients.txt");
    I=0;
    while (!myfile.eof()) {
        getline(myfile,line);
        tabclient[I].number= line;
        getline(myfile,line);
        tabclient[I].name= line;
        getline(myfile,line);
        tabclient[I].pin= line;
        getline(myfile,line);
        tabclient[I].balance= bal;

        I++;
    }
    Nb=I;
    for(int i=0 ; i<Nb;i ++){
        cout<<tabclient[i].number<<"\t"<<tabclient[i].name<<"\t"<<tabclient[i].pin<<"\t"<<tabclient[i].balance<<endl;
    }
    return 0;
}
