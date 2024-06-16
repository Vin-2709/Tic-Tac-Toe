#include<iostream>
using namespace std;

class Node{
  public:                                  //USER DEFINED DATA TYPE
      int val;
      Node*next;
      Node(int val){
        this->val=val;
        this->next=NULL;
      }
     
};
 
class LinkedList{                   //USER DEFINED DATA STRUCTURE
public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head=tail=NULL;
        size=0;
    }

    void InsertAtEnd(int val){
        Node*temp=new Node(val);
        if(size==0) head=tail=temp;
        else {
            tail->next=temp;
            tail=temp;
        }
        size++;
    }

    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<"  ";
            temp=temp->next;
        }
        cout<<endl;
    }
    int Size(){
        int n=0;
        while(head!=NULL){
            n++;
            head=head->next;
        }
      return n;
    }

    void InsertAthead(int val){
        Node*t=new Node(val);
        if (size==0) head=tail=t;
        else{
            t->next=head;
           head=t;
        }
        size++;
    }

    void InserAT(int idx,int val){
        Node*temp= new Node(val);
        Node*t=head;
        for(int i=0;i<idx-1;i++){
          t=t->next;

        }
        temp->next=t->next;
        t->next=temp;
        size++;
    }
    
   
};

//  void InsertEnDThroughNode(Node*head,int val){
//       while(head->next!=NULL){
//         Node*t=new Node(val);
//         head=head->next;
//         head->next=t;
//       }
//  }


int main(){
    LinkedList ll;
    ll.InsertAtEnd(10);
    
    // ll.display();
    ll.InsertAtEnd(20);
    // ll.display();
    ll.InsertAtEnd(30);
    ll.InsertAtEnd(40);
    ll.InsertAtEnd(50);
    // ll.display();
    // cout<<ll.Size();
    // InsertEnDThroughNode(head,70);
    //  ll.display();
    ll.InsertAthead(2);
    // ll.display();
    ll.InserAT(3,47);
    ll.display();
}