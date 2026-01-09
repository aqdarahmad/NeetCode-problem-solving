//Given an array of strings strs, group all anagrams together into sublists. You may return the output in any order.

//An anagram is a string that contains the exact same characters as another string, but the order of the characters can be different.
//Input: strs = ["act","pots","tops","cat","stop","hat"]

//Output: [["hat"],["act", "cat"],["stop", "pots", "tops"]]

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>result;
        map<string,vector<string>>mp;
       
        for(int i=0 ;i<strs.size();i++)
        {
           string key = strs[i];
           sort(key.begin(),key.end());
           mp[key].push_back(strs[i]);
        }

        for(auto &it:mp)
             result.push_back(it.second);

             return result;
    }
};
