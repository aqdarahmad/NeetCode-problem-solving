//Contains Duplicate
//Solved 
//Given an integer array nums, return true if any value appears more than once in the array, otherwise return false.

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int>s;
        for(int i=0;i<nums.size();i++)
        s.insert(nums[i]);

        if(nums.size()!=s.size())
        return true;
        else
        return false;
    }
};