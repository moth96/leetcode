double findMaxAverage(vector<int>& nums, int k) {
    int n = nums.size();
    double sum = 0;
    for(int i = 0; i < k; i++) sum += nums[i];
    double res = sum / k;
    for(int i = k, j = 0; i < n; i++, j++){
        sum -= nums[j];
        sum += nums[i];
        res = max(res, sum / k);
    }
    return res;
}
