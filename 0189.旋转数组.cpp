void reverse(vector<int>&nums, int begin, int end)
{
    while(begin < end)
    {
        swap(nums[begin], nums[end]);
        begin++;
        end--;
    }
}
void rotate(vector<int>& nums, int k) 
{
    int n = nums.size();
    k %= n;
    reverse(nums, 0, n-1);
    reverse(nums, 0, k-1);
    reverse(nums, k, n-1);
}
