/* Top K Frequent Elements */


vector<int>topkfrequenc(vector<int>&nums,int k){
      unordered_map<int,int> freq;
      for(int x:nums)
      freq[x]++;

      vector<pair<int,int>>arr;
      for(auto &p:freq)
      arr.push_back({p.second,p.first});
      sort(arr.rbegin(), arr.rend()); 
       vector<int> result;
        for(int i = 0; i < k; i++)
        result.push_back(arr[i].second);
    
    return result;
}