#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
 // in this algo we find all prime no till a given num, by min TC
    // we run loop till sqrt of num and mark all composite no. which are multiples of prime no. till sqrt(num) 
    //our search area get reduced and we get all prime no. till num
 
    void fillSieve(vector<bool>sieve){
        int n=sieve.size()-1;
        for(int i=2;i<=sqrt(n);i++){
            for(int j*=2;j<sqrt(n);j+=i){
                sieve[j]=0;                              //filling composite no.
            }
        }
    }

    int countPrimes(int n){
        int count=0;
        vector<bool>sieve(n+1,1);
        fillSieve(sieve);
        sieve[0]=0;
        sieve[1]=0;
        for(int i=2;i<=n;i++){
            if(sieve[i]==1) count++;
        }
        return count;
    }
int main(){
      countPrimes(6)
   
}