/*  Sort the elements of a stack in descending order. */
#include<bits/stdc++.h>
using namespace std;
void sortedInsert(stack<int>&s)

{
  
  int si = s.size();
  vector<int>v;
  if(s.empty()) 
  {
    return;
  }
  while(!s.empty())
  {
    v.push_back(s.top());
    s.pop();
  }
   sort(v.begin(), v.end(), greater<int>());
    for(int i=0;i<si;i++)
    {
        s.push(v[i]);
    }
    


}