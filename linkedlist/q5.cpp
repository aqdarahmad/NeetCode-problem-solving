/* 5. Insert Node at the End of Singly Linked List

Write a C++ program to insert a new node at the end of a Singly Linked List.

Test Data:
Original Linked list:
13 11 9 7 5 3 1
Insert a new node at the end of a Singly Linked List:
13 11 9 7 5 3 1 0  */

#include<bits/stdc++.h>
using namespace std;
struct node {
    int data;
    node *next;
};
struct  node *head = NULL;
void insertnodeatend(int value)
{
    struct node *newnode = new node();
    if(head == NULL)
    {
        newnode->data = value;
        newnode->next = NULL;
        head = newnode;
    }
    else 
    {
        struct node *temp = head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        newnode->data = value;
        newnode->next = NULL;
        temp->next = newnode;
    }

}
