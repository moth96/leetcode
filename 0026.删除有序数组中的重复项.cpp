int removeDuplicates(vector<int>& nums) {
    int n = nums.size();
    if (n == 0 || n == 1)return n;
    int ret = 0;
    for(int i = 1; i < n; i++){
        if (nums[i] != nums[i-1]){
            nums[++ret] = nums[i];
        }
    }
    return ret+1;
}
