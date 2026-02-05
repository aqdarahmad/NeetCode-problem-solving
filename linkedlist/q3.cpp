/* 
3. Count Nodes in a Singly Linked List

Write a C++ program to create a singly linked list of n nodes and count the number of nodes.

Test Data:
Original Linked list:
13 11 9 7 5 3 1
Number of nodes in the said Linked list:
7 */

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

int countnode()
{
  int count =0;
    struct node *temp = head;
    while(temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}