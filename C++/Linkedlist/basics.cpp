#include<iostream>
using namespace std;
class Node{
  public:
      int val;
      Node*next;
      Node(int val){
        this->val=val;
        this->next=NULL;
      }

};
int main(){
    Node a(10);
    Node b(20);
    Node c (40);
    Node d(50);
    //creating links
    a.next=&b;
    b.next=&c;
    c.next=&d;
    cout<<(*a.next).val<<endl;
    cout<<(*(*a.next).next).val<<endl;
    cout<<a.next->val<<endl;
    cout<<b.next->next->val<<endl;
    cout<<a.next->next->next->val<<endl;
      
}