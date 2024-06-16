#include<iostream>
using namespace std;

class cricketer {
       public:
         string name;
         int age;
         int NoTestMatch;
         int avg_runs;


};

int main(){
    cricketer a,b,c;
    cricketer Cricketers[3]={a,b,c};
    Cricketers[0].name="Virat";
    Cricketers[0].age=38;
    Cricketers[0].NoTestMatch=200;
    Cricketers[0].avg_runs=90;
    Cricketers[1].name="ROhit";
    Cricketers[1].age=40;
    Cricketers[1].NoTestMatch=190;
    Cricketers[1].avg_runs=120;
    Cricketers[2].name="Dhoni";
    Cricketers[2].age=42;
    Cricketers[2].NoTestMatch=203;
    Cricketers[2].avg_runs=100;
     
    int n=3;

    for(int i=0;i<n;i++){
        cout<<"Name :"<<Cricketers[i].name<<endl;
        cout<<"No of test matches :"<<Cricketers[i].NoTestMatch<<endl;
        cout<<"Age of player :"<<Cricketers[i].age<<endl;
        cout<<"Avg Runs :"<<Cricketers[i].avg_runs<<endl;

    }

    

}