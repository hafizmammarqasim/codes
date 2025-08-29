
vector<int> moveZeroes2(vector<int>& nums) {

    //new memory use nhi krni , iss main ho rhi ha

    int count = 0;
    vector<int>arr;
    for (auto i : nums) {
        if (i == 0) {
            count++;
            continue;
        }
        arr.push_back(i);

    }
    while (count--) {
        arr.push_back(0);

    }
    return arr;
}

void moveZeroes(vector<int>& nums) {

    bool flag = false;

    while (1) {
        flag = false;


        for (int i = 0; i < nums.size();i++) {
            if (i + 1 < nums.size()) {
                if (nums[i]==0&&  nums[i + 1] != 0) {
                    swap(nums[i], nums[i + 1]);
                    flag = true;
                }
            }
         }




        if (!flag) {
            return;
        }
    }

}
