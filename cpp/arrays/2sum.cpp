 vector<int> twoSum(vector<int>& nums, int target) {
     vector<int> arr;
    unordered_multimap<int,int> checker;
    int a;
    for(int i=0;i<nums.size();i++){
        a=0;
        a= target-nums[i];
        auto range = checker.equal_range(a);
        for (auto it = range.first; it != range.second; ++it) {
            arr.push_back(i);
            arr.push_back(it->second);
            return arr;

        }
        checker.insert({nums[i],i});

    }
    return arr;
}