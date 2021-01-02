vector<int> maxSlidingWindow(vector<int>& nums, int k) 
{
    vector<int> ret;
    priority_queue<pair<int,int>> q;
    for(int i = 0; i < k; i++)
    {
        q.emplace(nums[i], i);
    }
    ret.push_back(q.top().first);
    for (int i = k; i < nums.size(); i++)
    {
        q.emplace(nums[i],i);
        while(q.top().second <= i - k) q.pop();
        ret.push_back(q.top().first);
    }
    return ret;
}
