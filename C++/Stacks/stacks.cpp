#include<iostream>
using namespace std;
#include<stack>
// display function for stack
 void disp( stack<int> st){
     stack<int>temp1;
     while(st.size()>0){
        temp1.push(st.top());
        st.pop();
     }
     while(temp1.size()>0){
        cout<<temp1.top()<<" ";
        st.push(temp1.top());
        temp1.pop();

     }

    }

void addATidx(stack<int>&st,int idx,int val){
       stack<int>temp;
       while(st.size()>idx){
        temp.push(st.top());
        st.pop();
         
       }
       st.push(val);
       while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
       }
}


int main(){
    //declaration
    stack<int>stc;
    stc.push(10);
    stc.push(20);
    stc.push(30);
    stc.push(40);
    stc.push(50);
    stc.push(60);

    cout<<stc.size()<<endl;                      //size of stack
     
     //display of stack in reverse order by use of another stack

    //  stack<int>temp;
    //  while(stc.size()>0){
    //     cout<<stc.top()<<" ";
    //     temp.push(stc.top());
    //     stc.pop();
    //  }

     //display of stack in original order 

    //  stack<int>temp1;
    //  while(stc.size()>0){
    //     temp1.push(stc.top());
    //     stc.pop();
    //  }
    //  while(temp1.size()>0){
    //     cout<<temp1.top()<<" ";
    //     stc.push(temp1.top());
    //     temp1.pop();

    //  }

    //Reverse a stack using two stacks
    
   
//     stack<int>st1;
//     stack<int>st2;
//     while(stc.size()>0){
//         st1.push(stc.top());
//         stc.pop();
//     }

//    while(st1.size()>0){
//       st2.push(st1.top());
//       st1.pop();
//    }

//    while(st2.size()>0){
//     stc.push(st2.top());
//     st2.pop();
//    }

//    disp(stc);



   // to add elements at any index

   // 10 20 30 40 50 60   idx=2

 addATidx(stc,2,100);
 disp(stc);

   

}