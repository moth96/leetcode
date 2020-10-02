#include"solution.h"

vector<int> exchange(vector<int>& nums)
{
	int p = 0, q = 0;
	int n = nums.size();
	while (q < n)
	{
		if (nums[q] & 1)
		{
			swap(nums[q++], nums[p++]);
		}
		else
			q++;
	}
	return nums;
}