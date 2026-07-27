#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node * next;

    Node(int val){
        this->val= val;
        this->next = NULL;
    }
};

void display(Node* a){
    Node *temp = a->next;
    while(temp!= NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
}
int main(){
    Node a(10);
   Node b(20);
  
  
    Node c(30);
    
    Node d (40);
  


    // for giving address
    a.next= &b;
    b.next = &c;
    c.next = &d;

    // cout<<a.val;
    // cout<<(a.next)->val;
    //  cout<<(((a.next)->next)->next)->val;

display(a.next);
}
