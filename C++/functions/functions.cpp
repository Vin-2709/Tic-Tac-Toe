 #include<iostream>
  using namespace std;
 #include<vector> 

// some functions-



// min(x,y) , max(x,y) , pow(x,y) , sqrt(x,y)

// for sqrt() write #include<cmath>



//                ************** Q. WAP TO PRINT HCF OF TWO NO.S USING FUNCTIONS


// void hcf (int x, int y){
//     int mini =min(x,y);
//     int hcf=1;
//     for(int i=mini;i>=2;i--){
//         if(x%i==0 && y%i==0){
//             hcf=i;
//             cout<<hcf;
//             break;
            
//         }
//     }
// }

// int main (){
//     int x,y;
//     cin>>x>>y;
//     hcf(x,y);
// }






                      
int fun(int x){
    int count=0;
    cout<<x*x<<endl;
    for(int i=1;i<=x;i++){
        x/=10;
        count++;
        if(x==0) break;


    }
    cout<<count<<endl;
    
}

int main(){
    int x;
    cin>>x;
    fun(x);

}