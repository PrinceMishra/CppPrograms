#include <iostream> 
using namespace std;
class Node
{
    public:
    int data=0;
    Node* next;
};
 void print(Node* node)
 {
    while (node!=NULL)
    {
        cout<<node->data<<endl;
        node=node->next;
    }
    
 }
  Node* insertAtBegining(Node* newHead, int value)
 {
    Node* ptr=new Node();
    ptr->next=newHead;
    ptr->data=value;
    return ptr;

 }
  Node* insertAtEnd(Node* copyHead, int value)
 {
    Node* ptr=new Node();
    Node* p=copyHead;
    ptr->data=value;
    while (p->next!=NULL)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    
    return copyHead;

 }
  Node* insertInBetween(Node* headCopy, int index, int value)
 {
    Node* ptr=new Node();
    Node* keepHead=headCopy;
    int i=0;
    while(i!=(index)-1)
    {
        keepHead=headCopy->next;
    }
    ptr->data=value;
    ptr->next=keepHead->next;
    keepHead->next=ptr;
    return headCopy;

 }
 

int main()
{
    Node *head=NULL;
    Node *second=NULL;
    Node *third=NULL;
    
    head=new Node();
    second=new Node();
    third=new Node();
    head->data=4;
    head->next=second;
    second->data=5;
    second->next=third;
    third->data=6;
    third->next=NULL;
// newhead=new Node();
// newhead->data=45;
// newhead->next=head;
head=insertAtEnd(head, 1);
     print(head);
     return 0;
}