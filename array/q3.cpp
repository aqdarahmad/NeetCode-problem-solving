//Two Sum 
//Given an array of integers nums and an integer target, return the indices i and j such that nums[i] + nums[j] == target and i != j.
//You may assume that every input has exactly one pair of indices i and j that satisfy the condition.
//Return the answer with the smaller index first.
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>v;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            if(nums[i]+nums[j] == target)
            {
                return {i,j};
            }
        }
         return {};
    }
};
