// fib = 0 1 1 2 3 5 8 13 21 34 
//       0 1 2 3 4 5 6  7  8  9
#include <bits/stdc++.h>
using namespace std;
// revursive approach
int fib(){
if(n==1) return n;
else 
return fib(n-1) + fib(n-2);
}


// time complexity = exponential o(2^n)
 // space complexity = o(n) for the recursive stack

 // memoization approach top down

 int fib_memo(int n ,vector<int>&dp)
 {
  if(n==1) return n;
  dp[n] = fib_memo(n-1,dp) + fib_memo(n-2,dp);
  return dp[n];
 }
// tabulation approach bottom up 
int fib_tab(int n)
{
    vector<int>dp(n+1);
    dp[0] = 0;
    dp[1] = 1;
    for(int i=2;i<=n;i++)
    {
        dp[i]=dp[i-1] + dp[i-2];
    }
    return dp[n];
}
// more optimized approach
int fib_tab(int n)
{
  
   int prev=0;
   int curr=1;
   int temp=0;
    for(int i=2;i<=n;i++)
    {   temp=curr; 
        curr=prev+curr;
        prev=temp;
    }
    return curr;
}