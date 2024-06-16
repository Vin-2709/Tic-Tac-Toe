#include<iostream>
using namespace std;

class Vehicle{
         
        public:

      
        int tyreSize,enginesize;
        Vehicle(int tyreSize,int enginesize){                        //parametrized constructor
            this->tyreSize=tyreSize;
            this->enginesize=enginesize;

        }

        // ~Vehicle(){
        //     cout<<"Destructor call hua"<<endl;                       //desturctor
        // }

};

int main(){
    // Vehicle Scorpio(12,100);
    // Vehicle Thar(29,399);
    // cout<<Scorpio.enginesize<<" "<<Thar.enginesize;
    Vehicle Scorpio1(13,500);
    Vehicle Scorpio2=Scorpio1;
    cout<<Scorpio1.tyreSize<<endl;
    cout<<Scorpio2.tyreSize<<endl;
    Scorpio1.tyreSize=15;
    cout<<Scorpio1.tyreSize<<endl;
    cout<<Scorpio2.tyreSize<<endl;



}