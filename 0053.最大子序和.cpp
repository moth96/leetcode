#include"solution.h"

int maxSubArray(vector<int>& nums)
{
	int n = nums.size();
	int res = INT_MIN;
	int pre = INT_MIN;
	for (int i = 0; i < n; i++)
	{
		pre = max(pre + nums[i], nums[i]);
		res = max(pre, res);
	}
	return res;
}