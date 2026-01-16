/* 6. Find the Middle Element of a Linked List

Write a C++ program to find the middle element of a given Linked List.

Test Data:
Original list:
7 5 3 1
Middle element of the said list:
3
Original list:
9 7 5 3 1
Middle element of the said list:
5 */
int findmidle(const list<int>&ll)
{
    
    int mid = ll.size()/2;
    int x=0;
   for(int val : ll)
   {
    if(x==mid)
    return val;
    x++;
   }
   return -1;

}