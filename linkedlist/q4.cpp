/* 4. Insert Node at the Beginning of Singly Linked List */

//
/* Test Data:
Original Linked list:
13 11 9 7 5 3 1
Insert a new node at the beginning of a Singly Linked List:
0 13 11 9 7 5 3 1 */


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
   newnode->data = value;
    newnode->next=head;
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
void insertatbegin(int value)
{
    struct node *newnode = new node();
    newnode->data = value;
    newnode->next = head;
    head = newnode;
}