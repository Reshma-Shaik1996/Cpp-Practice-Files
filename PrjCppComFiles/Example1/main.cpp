

#include <iostream>
#include <fstream>
using namespace std;
int main() {
   
  /*  ofstream myfile;
    myfile.open("students.txt", ios::app); //app: append
    // ios::out= writing(overwriting) by default for ofstream
    //ios:: in= Reading by default for ifstream
    myfile<<"Reshma Gates"<<endl;
    myfile<<"Bill Shaik"<<endl;
    myfile.close();   */
    ifstream myfile;
    string line;
    myfile.open("Myfriends.txt");
    while(myfile.eof()== false){
        getline(myfile, line);
        cout<<line<<endl;
        
    }
    myfile.close();
    return 0;
}
