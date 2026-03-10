using namespace std;
#include <bits/stdc++.h>
template<typename T>
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

void delfirst(node<int>*&head)
{
    if(head->next==NULL) return ;
    node<int>*temp=head;
    head=head->next;
    delete temp;
}

void dellast(node<int>*&head)
{
    node<int>*temp=head;
 
    if(head->next==0)
    {
        delete head;
        head=0;
        return;
    }
    while(temp->next->next!=0)
     temp=temp->next;
     
     delete temp->next;
     temp->next=0;
    
}

void add(node<int>*&head,int item)
{
    node<int>*temp=new node<int>(item);
    temp->next=head;
    head=temp;
    
}


void fill(node<int>*&head,int n)
{
    for(int i=0;i<n;i++)
       add(head,i);
}
void print(node<int>*&head)
{
    node<int>*temp=head;
    while(temp!=0)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}


void del(node<int>*&head,int item)
{
    if(head==0) return;
    node<int>*prev,*follow;
    prev=follow=head;
    while(follow!=0 && follow->data!=item)
    {
        prev=follow;
        follow=follow->next;
    }
    if(follow==0)return ;
    if(prev==follow)
        head=head->next;
    else
        prev->next=follow->next;
        delete follow;
    
    
    
}

void delmin(node<int>*&head)
{
   node<int>*temp,*minnode,*prev,*minprev;
   temp=head;
   minnode=head;
   prev=NULL;
   minprev=NULL;
   while(temp!=NULL)
   {
       if(temp->data<minnode->data)
       {
           minnode=temp;
           minprev=prev;
       }
       prev=temp;
       temp=temp->next;
   }
   if(minprev==NULL)
   head=head->next;
   else
   minprev->next=minnode->next;
   delete minnode;
    
    
   
}


void delemax(node<int>*&head)
{
    node<int>*temp,*prev,*maxnode,*maxprev;
    temp=head;
    maxnode=head;
    prev=0;
    maxprev=0;
    while(temp!=0)
    {
        if(temp->data>maxnode->data)
        {
            maxnode=temp;
            maxprev=prev;
        }
        prev=temp;
        temp=temp->next;
    }
    if(maxprev==0)
    head=head->next;
    else
    maxprev->next=maxnode->next;
    delete maxnode;
}

void deleteodd(node<int>*&head)
{
    node<int>*temp,*temp2;;
    temp=head;
    temp2=head;
    while(temp!=0)
    {
        if(temp->data%2!=0)
        {
            temp2=temp;
            delete temp2;
            
        }
         temp=temp->next;
    }
}

int main() {
    node<int>*head=0;
    fill(head,5);
  //  delfirst(head);
    //dellast(head);
  //  del(head,1);
  //delmin(head);
    //delemax(head);
    deleteodd(head);
  
    print(head);
    
 

    return 0;
}