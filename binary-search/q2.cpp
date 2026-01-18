/* Search a 2D Matrix
Medium
Company Tags
Hints
You are given an m x n 2-D integer array matrix and an integer target.

Each row in matrix is sorted in non-decreasing order.
The first integer of every row is greater than the last integer of the previous row.
Return true if target exists within matrix or false otherwise.

Can you write a solution that runs in O(log(m * n)) time? */

bool searchmatrix(const vector<vector<int>>&matrix , int target)
{
    if(matrix.size() == 0) return false;
    int m = matrix.size();
    int n = matrix[n].size();
    int left = 0 , right = m*n -1;

    while(left <= right)
    {
        int mid = left+(right - left) / 2;
        int row = mid/2;
        int col = mid %2;
        int midval = matrix[row][col] ; 
    
        if(midval == target)
    {
        return true;
    }
    else if(midval < target)
    {
        left = mid + 1;
    }
    else 
    {
        right = mid -1;
    }
}
return false;
}