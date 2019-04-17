
#include <iostream>
using namespace std;

void toNullify(int *value){
    *value=0;
    cout<<"In Function to Nullify value="<<*value<<endl;
}


int main(int argc, const char * argv[]) {
    int val = 25, tabAge[5]={75,45,74};
    cout<<"The address of the val"<<&val<<endl;
    cout<<"The address of the val :"<<*(&val)<<endl;
/*
    cout<<"In main, Before to Nullify the value="<<val<<endl;
    toNullify(val);
    cout<<"In main, after to Nullify the value="<<val<<endl;

    toNullify(&val);

    cout<<"In main, after to Nullify the value="<<val<<endl;
*/
    cout<<"The address of the first element of the Array"<<&tabAge[0]<<endl;
    cout<<"The address of the Tabage is"<<tabAge<<endl;
    cout<<"The content of the Tabage is"<<*(&tabAge[1]+1)<<endl;

    cout<<"The address of the second element of the Array"<<&tabAge[1]<<endl;

    return 0;
}
