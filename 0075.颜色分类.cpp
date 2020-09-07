#include"solution.h"

void sortColors(vector<int>& nums)
{
	int n = nums.size();
	int p0 = 0, cur = 0;
	int p2 = n - 1;
	while (cur <= p2)
	{
		if (nums[cur] == 0)
			swap(nums[cur++], nums[p0++]);
		else if (nums[cur] == 2)
			swap(nums[cur], nums[p2--]);
		else
			cur++;
	}
}