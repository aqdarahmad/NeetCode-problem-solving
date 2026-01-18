/* Problem: Given an array, find the maximum sum of a subarray of size K.A */




#include <iostream>
#include <vector>
#include <climits>
using namespace std;


int maxsumsubarray(int arr[] , int n , int k)
{
    int maxsum = INT_MIN;
   int windowsum = 0;

   for(int i=0;i<k;i++)
   {
    windowsum += arr[i];
   }

   for(int i=k;i<n;i++)
   {
    winddowsum += arr[i] - arr[i-k];
    maxsum = max(maxsum , windowsum);
   }
   return maxsum;
}

int main()
{
    int arr[] = {2,1,5,1,3,2};
    int k =3;
    int n = sizeof(arr)/sizeof(arr[0]);

}
