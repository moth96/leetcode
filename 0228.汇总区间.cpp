vector<string> summaryRanges(vector<int>& nums) 
{
    vector<string> res;
    int n =nums.size();
    if (0 == n) return {};
    if (1 == n) return {to_string(nums[0])};
    int start = 0, end = 0;
    while(end < n)
    {
        while(end < n - 1 && nums[end+1] == nums[end] + 1)
        {
            end++;
        }
        if (start == end) res.push_back(to_string(nums[end]));
        else
        {
            string str = "";
            str += to_string(nums[start]);
            str += "->";
            str += to_string(nums[end]);
            res.push_back(str);
        }
        start = end + 1;
        end = start;
    }
    return res;
}
