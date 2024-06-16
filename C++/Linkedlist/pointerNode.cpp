#include<iostream>
using namespace std;

class Node{
  public:                                  //creating Node
      int val;
      Node*next;
      Node(int val){
        this->val=val;
        this->next=NULL;
      }
     
};

 int Size(Node* a){                       // size of LL 
    Node *temp=a;
    int n=0;
    while(temp!=NULL){
        n++;
        temp=temp->next;
        
    }
    return n;

 }

 void Disp(Node*head){                          // display of LL elements using recursion
    if(head==NULL) return;
    cout << head->val<<endl;
    Disp(head->next);
 }

 void RevDisp(Node*head){                          // display of LL elements using recursion
    if(head==NULL) return;
    RevDisp(head->next);
    cout << head->val<<endl;
    
 }

int main(){
    Node*a= new Node(10);
    Node*b= new Node(20);
    Node*c= new Node(30);
    Node*d= new Node(40);
     
    a->next=b;
    b->next=c;
    c->next=d;

                                 
    // Node *temp=a;                       display of LL elements using temp (iterative method)
    // while(temp!=NULL){ 
    //     cout<<temp->val<<" ";
    //     temp=temp->next;
    // }

    // cout<<a->next->next->next->val;

    // Size(a);

    // Disp(a);
// iterative method is good as compared to recursive method as both have 0(n) TC but SC for first is 0(1) but for other it is 0(n)
    RevDisp(a);
}