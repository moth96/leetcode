int removeElement(vector<int>& nums, int val) {
    int n = nums.size();
    int ret = 0;
    for (int i = 0; i < n ; i++){
        if(nums[i] != val){
            nums[ret++] = nums[i];
        }
    }
    return ret;
}
