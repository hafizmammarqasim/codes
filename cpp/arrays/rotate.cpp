void rotate(vector<int>& nums, int k) {
    k = k % nums.size();

    vector <int> arr(nums.end() - k, nums.end());
    nums.erase(nums.end() - k, nums.end());
    nums.insert(nums.begin(), arr.begin(), arr.end());
}
void rotate2(vector<int>& nums, int k) {

    // barii inputs pr fail hojata ha 
    // mgar space main O(1) ha

    k = k % nums.size();
    int last;
    while (k--) {
        last = nums.back();
        nums.pop_back();
        nums.insert(nums.begin(), last);
    }
}
