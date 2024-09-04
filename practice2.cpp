#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node * next;
    Node()
    {
        data = 0;
        next = nullptr;
    }
   explicit Node(int v)
    {
        data = v;
        next = nullptr;
    }
};
Node* add(Node* head, int val)
{
    Node* ad = head;
    Node* temp = new Node(val);
    while(head->next != nullptr)
    {
        head = head->next;
    }
    head->next= temp;
    return ad;
}
Node* insert_from_front(Node* head,int val)
{
    Node* temp = new Node(val);
    temp->next = head;
    head = temp;
    return head;
}
 int main()
 {
     int n;
     cout<<"Enter the number of elements : "<<endl;
     cin>>n;

     Node* link = new Node();
     Node* head = link;
     cout<<"Enter the elements :"<<endl;
     int x;
     for(int i=1;i<=n;i++)
     {
         x=0;
         cin>>x;
         head = add(head,x);
     }
     //printing the linked list
     link = link->next;
     head = head->next;
     //deleting first unreserved node
     cout<<"After Inserting node at last"<<endl;
     while(head !=nullptr)
     {
         cout<<head->data<<" ";
         head= head->next;
     }
     cout<<endl;
     head = link;
     //inserting from front
     cout<<"Enter the element to insert in front"<<endl;
     cin>>n;
     head = insert_from_front(head,n);
     cout<<"After inserting node in front linked list is : "<<endl;
     while(head !=nullptr)
     {
         cout<<head->data<<" ";
         head= head->next;
     }
     cout<<endl;

     delete(link);
     return 0;
 }