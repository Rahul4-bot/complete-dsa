#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;

    Node(int val){
        this->val= val;
        this->next= NULL;
    }
};
void Display(Node* n1){
Node* temp = n1;
int size = 0;
while(temp != NULL){
    cout<<temp->val<<endl;
    temp = temp->next;
    size++;
}
cout<<size;
}





}
int main(){
Node* head = new Node(10);
Node* n2 = new Node(20);
Node* n3 = new Node(30);
Node* n4 = new Node(40);

head->next= n2;
n2->next=n3;
n3->next=n4;


Display(head);




}