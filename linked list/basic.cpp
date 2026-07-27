#include<iostream>
#include<conio.h>
using namespace std;



// class Node{
//     public:
//     int value;
//     Node* next;

// };


// int main(){
//     Node a;
//     a.value= 10;
//     Node b;
//     b.value = 20;
//     Node c;
//     c.value = 30;
//     Node d;
//     d.value = 40;

//     // formating of linked list
//     a.next = &b;
//     b.next = &c;
//     c.next = &d;
//     d.next = NULL;



    
//     cout<<(a.next)->value;
// }


class Node{
    public:
    int value;
    Node* next;
    node(int value){
        this->value= value;
        this->next= NULL;
    }
};

int main (){
    Node(a);
    
    a.value = 10;
    Node b;
    
    b.value = 20;
    Node(c);
  
    c.value = 30;
    Node(d);
    
    d.value= 40;

    // formating
    a.next= &b;
    b.next = &c;
    c.next= &d;


    cout<<a.next;
    cout<<a.value;
}