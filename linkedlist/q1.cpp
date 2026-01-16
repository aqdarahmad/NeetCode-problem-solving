/* 1. Create and Display Singly Linked List

Write a C++ program to create and display a Singly Linked List.

Test Data:
The list contains the data entered:
11 9 7 5 3 1 */


#include<bits/stdc++.h>
using namespace std;

struct  node
{
    int data;
    node* next;
    /* data */
};
struct node *head = NULL;

void insertnode(int item)
{
    struct node *newnode = new node();
    newnode->data = item;
    newnode->next = head;
    head = newnode;
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
