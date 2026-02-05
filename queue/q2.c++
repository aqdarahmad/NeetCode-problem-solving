/* 
3. Sort Queue Elements

Write a C++ program to sort the elements of a queue */
#include<bits/stdc++.h>
using namespace std;
// Function to sort the elements of the queue
//
// Function to sort the elements of the queue
//void sortQueue(queue<int>&q)
int main() {
 queue<int>q;
 q.push(12);
 q.push(14);
 q.push(19);
 q.push(30);
 //while(!q.empty())
 //{
 //cout<<q.front()<<" ";
 //q.pop();
 //}
multiset<int>s;
while(!q.empty())
{
    s.insert(q.front());
    q.pop();
    
}
for(int x:s)
{
    q.push(x);
}
while(!q.empty())
 {
 cout<<q.front()<<" ";
 q.pop();
 }
    return 0;
}