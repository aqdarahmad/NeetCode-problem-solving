/* Reverse Queue Elements

Write a C++ program to reverse the elements of a queue. */

#include<bits/stdc++.h>
using namespace std;


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
 stack<int>st;
 while(!q.empty())
 {
     st.push(q.front());
     q.pop();
 }
 while(!st.empty())
 {
     q.push(st.top());
     st.pop();
 }
 while(!q.empty())
 {
     cout<<q.front()<<" ";
     q.pop();
 }
 
    return 0;
}