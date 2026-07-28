#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
  

    Node(int val){
        this->val= val;
        this->next = NULL;
    }
};
int main (){
  Node* n1 = new Node(10);//imp= yha pe n1 node ke object ka address store kr rha h
  Node* n2 = new Node(20);// n1 ak node* pointer ka variable h
  Node* n3 = new Node(30);
  Node* n4 = new Node(40);
  Node* n5 = new Node(50);

  n1->next=  n2;
  n2->next= n3;
  

// printing function
Node* temp= n1;
while(temp!= NULL){
    cout<<temp->val;
    temp = temp->next;
}


//   cout<<n1->val<<endl;
//   cout<<n1->next;
}