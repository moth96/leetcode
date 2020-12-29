int minPatches(vector<int>& nums, int n) 
{
    int res = 0;
    unsigned int x = 1;
    int i = 0;
    int len = nums.size();
    while(x <= n)
    {
        if ( i < len && nums[i] <= x)
        {
            x += nums[i];
            i++;
        }
        else
        {
            x *= 2;
            res++;
        }
    }
    return res;
}
