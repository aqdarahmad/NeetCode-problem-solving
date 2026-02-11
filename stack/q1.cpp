/* . Sort the elements of a stack in ascending order. */

#include<bits/stdc++.h>
using namespace std;
void sortedInsert(stack<int>&s)

{
  stack<int>temp;
  int si = s.size();
  vector<int>v;
  if(S.empty()) 
  {
    return;
  }
  while(!s.empty())
  {
    v.push_back(s.top());
    s.pop();
  }
  sort(v.begin(),v.end());
    for(int i=0;i<si;i++)
    {
        s.push(v[i]);
    }
    


}