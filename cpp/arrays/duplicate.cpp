bool containsDuplicate(vector<int>& nums) {
    unordered_set<int> arr;
    for (auto i : nums) {
        if (arr.find(i) == arr.end()) {
            arr.insert(i);
        }
        else {
            return true;
        }
    }
    return false;

}