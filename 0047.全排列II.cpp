#include"solution.h"

vector<vector<int>> res;
vector<int> cur;
vector<int> used;

void backtrack(vector<int>& nums, int idx) 
{
    if (idx == nums.size()) 
    {
        res.emplace_back(cur);
        return;
    }
    for (int i = 0; i < (int)nums.size(); ++i) 
    {
        if (used[i] || (i > 0 && nums[i] == nums[i - 1] && !used[i - 1])) {
            continue;
        }
        cur.emplace_back(nums[i]);
        used[i] = 1;
        backtrack(nums, idx + 1);
        used[i] = 0;
        cur.pop_back();
    }
}

vector<vector<int>> permuteUnique(vector<int>& nums) {
    used.resize(nums.size());
    sort(nums.begin(), nums.end());
    backtrack(nums, 0);
    return res;
}