
#include <iostream>
using namespace std;
int main() {
    char phrase[20] = "Manpreet";
    cout<<phrase<<endl;
    // phrase[3] = '\0';
    //cout<<phrase<<endl;
   /* for (int i=0; i<20; i++) {
        cout<<phrase[i];

    }*/
    cout<<"Enter your Name : ";
  //  cin>>phrase;
    cin.getline(phrase , 20);
    int i=0;
    while (phrase[i] !='\0') {
        cout<< char(toupper(phrase[i]));
        i++;
    }
    return 0;
}
//       cin.getline(phrase , 20);
//     char(toupper(phrase[i]))
