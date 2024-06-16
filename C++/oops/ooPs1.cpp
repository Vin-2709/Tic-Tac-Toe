#include<iostream>
using namespace std;

class  Character {
   
    private:

      int health;

      string weapon;

      int alive;

    public:

       int rank;
       int KD;
       

       void ShowRank(){
           cout<<"Rank is "<<rank;
       }


       void sethealth(int h){                    //setter for private data members
        health=h;
       }

       int gethealth(){                         //getter for private data members
        return health;
       }

       void setWeapon(string s){
           weapon=s;
       }

       void getweapon(){
        cout<<weapon<<endl;
       }

       void aalive(int n){
          alive=n;
       }

       void showalive(){
         cout<<alive;
       }


};


int main(){
    Character Vin;
    //   Vin.health=1000;
      Vin.rank=5000;
      Vin.KD=4.6;
      cout<<Vin.KD<<endl;
    //   Vin.ShowRank();

      Vin.sethealth(400);
      cout<<Vin.gethealth()<<endl;
      Vin.setWeapon("AKM");
      Vin.getweapon();

      Vin.aalive(34);
      Vin.showalive();
}