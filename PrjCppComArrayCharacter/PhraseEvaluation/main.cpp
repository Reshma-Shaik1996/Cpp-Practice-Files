

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    
   
    char phrase[501];
    int  numbers= 0,  spaces=0,  letters =0, consonents=0, special_character=0, NumberOfVowels=0 ;
    cout<<"\tPHRASE-EVALUATION\n";
    cout<<"\t-----------------\n";
    cout<<"Enter a phrase (Max 500) :";
    cin.getline(phrase,501);
    int i=0;//character
    while (phrase[i] != '\0') {
       
    if(isdigit (phrase[i]) ) //numberes
    {
        numbers++;
    }
   
   
      else if (isspace (phrase[i] )) {    // spaces
            spaces++;
        }
        
      else if (isalpha (phrase[i])) { //Letters
          letters++;
      
    
        char temp = toupper(phrase[i]);   // temporarily storing the Uppercase letters
   
       
        if(temp== 'A' ||temp== 'E' ||temp== 'I' ||temp== 'O' ||temp== 'U' )
                 NumberOfVowels++;    //vowels
           else
                consonents++;
      }
       
        
        i++;
    }
    special_character = i-(spaces+letters+numbers);
    cout<<"Thank you.,";
    cout<<"Your phrase contains :";
    cout<<"-"<<i<<"Characters";
    cout<<"-"<<numbers<<"Numbers";
    cout<<"-"<<spaces<<"Spaces";
    cout<<"-"<<letters<<"Letters";
    cout<<"-"<<NumberOfVowels<<"Vowels";
    cout<<"-"<<consonents<<"consonents";
    cout<<"-"<<special_character<<"Special Characters";
    cout<<"Your Phrase in Reverse : ";

    for (int j= i-1; j>=0; j--) {
      cout<< phrase[j];
    }





    return 0;
}
