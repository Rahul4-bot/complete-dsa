#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

class LinkedList
{
public:
    Node *head;
    Node *tail;
    int size;

    LinkedList()
    {
        head = tail = NULL;
        size = 0;
    }

    void Display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val<<" " ;
            temp = temp->next;
        }
    }
    void Size()
    {
        Node *temp = head;
        int size = 0;
        while (temp != NULL)
        {
            size++;
            temp = temp->next;
        }
        cout << size;
    }

    void InsertAtEnd(int n)
    {
        Node *temp = new Node(n);
        if (size == 0)
        {
            head = tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    void InsertAtBeginning(int n)
    {
        Node *temp = new Node(n);
        if (size == 0)
        {
            head = tail = temp;
        }
        else
        {
            temp->next = head;
            head = temp;
        }
        size++;
    }
     void InsertAtIdx(int idx ,int val){
      
         if (idx<0 || idx>size) {cout<<"the linked list is empty" ;}
         else if(idx == 0){InsertAtBeginning(val);}
        else if(idx == size){InsertAtEnd(val);}
         else{
          Node* t = new Node(val);
          Node *temp = head;
             for(int i=1;i<=idx-1;i++){
                 temp = temp->next;
            }
    t->next = temp ->next;
    temp->next = t;
size++;

         }
         
    
     }
};
int main()
{
    LinkedList l1;
  l1.InsertAtBeginning(10);
  l1.InsertAtBeginning(29);
  l1.InsertAtIdx(1,100);
  
  l1.Display();
    l1.Size();
}