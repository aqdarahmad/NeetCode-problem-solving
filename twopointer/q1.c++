/* check if a string is palindrom e using two-pointer technique */


//comlixty o(n/2)
#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s){
int l=0, r=s.size()-1;
while(l<r){
    if(s[l]!=s[r])
    return false;
    l++;r--;

}
return true;
}