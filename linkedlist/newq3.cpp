using namespace std;
#include <bits/stdc++.h>

template<typename t>
struct node{
    int data;
    node* next;
    
    node()
    {
        next=0;
        data=0;
    }
    node(int item)
     {
         data=item;
         next=0;
     }
};

void add(node<int>*& head, int value)
{
    node<int>* newNode = new node<int>;
    newNode->data = value;
    newNode->next = NULL;

    if(head == NULL)
    {
        head = newNode;
        return;
    }

    node<int>* temp = head;

    while(temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
}
void empty(node<int>*&head)
{
    node<int>*temp=head;
    while(temp!=0)
{
    head=head->next;
    delete temp;
}
}


void deleteodd(node<int>*&head)
{
   
    while(head!=0)
    {
         node<int>*temp=head;
          head=head->next;
         if(temp->data%2!=0)
         delete temp;
        
        
    }
}

void deleteitem(node<int>*&head,int item)
{   node<int>*temp=head;
    if(head==0) return;
    if(head->data==item)
    {   head=head->next;
        delete temp;
        return;
        
    }
   node<int>*curr=head;
   while(curr->next != NULL)
   {
       if(curr->next->data == item)
       {
           node<int>*temp=curr->next;
           curr->next=temp->next;
           delete temp;
           return;
           
       }
       curr=curr->next;
   }
   
}

void delmin(node<int>*&head)
{
    int m=head->data;
    node<int>*p=head->next;
    while(p!=0)
    {
        if(p->data<m)
        m=p->data;
        p=p->next;
    }
    deleteitem(head,m);
}
void print(node<int>* head)
{
    while(head != NULL)
    {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}
int main() {

    node<int>* head = NULL;

    add(head,7);
    add(head,3);
    add(head,9);
    add(head,1);
    add(head,5);

    cout<<"Before delete min:\n";
    print(head);

    delmin(head);

    cout<<"After delete min:\n";
    print(head);
return 0;
}