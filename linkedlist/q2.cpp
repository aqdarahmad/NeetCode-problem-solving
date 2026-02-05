/* C++ Linked List Exercises: Reverse linked list */
/* Test Data:
Original Linked list:
11 9 7 5 3 1
Reverse Linked list:
1 3 5 7 9 11 */

#include<bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node *next;
};


struct  node *head = NULL;
void insertnode(int value)
{
    struct node *newnode = new node();
   node->data = value;
    node->next=head;
    head = newnode;
}

void printlist()
{
    struct node *temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void reverse(node *head)
{
    stack<int>s;
    node *temp;
    while(temp!=NULL)
    {
        s.push(temp->data);
        temp = temp->next;


    }
    temp =head;
    while(temp != NULL)
    {
        temp->data = s.top();
        s.pop();
        temp = temp->next;
    }
}

void display()
{
    struct node *temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp =  temp->next;
    }
    cout<<endl;
}
int main(){
    insertnode(1);
    insertnode(3);
    insertnode(5);
    insertnode(7);
    insertnode(9);
    insertnode(11);
    display();
    return 0;

}