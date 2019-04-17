
#include <iostream>
using namespace std;
int main() {
    cout<<"\tCOLLEGE LASSALE\n";
    cout<<"\t---------------\n";
    int n,avg=0,best, worst;
    int StudentArray[20];
   
    cout<<"Enter the number of students(MAX 20):";
    cin>>n;
    for (int i=0; i<n; i++) {
        cout<<"Enter the grade"<<i+1;
        cin>>StudentArray[i];
    }
    cout<<"The class grades are";
    
    for (int i=0; i<n; i++) {
        cout<<" "<<StudentArray[i]<<"-";
        avg=avg+StudentArray[i];
     //  avg=avg/i;
   //   best=  StudentArray[i]>best?best:worst;
    }
   // cout<<"The class Average is:"<<avg;
   // cout<<"The class best is:"<<best;


    return 0;
}

