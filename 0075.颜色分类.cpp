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

//2

void sortColors(vector<int>& nums) 
{
        int end = nums.size() - 1;
        int pre = 0, cur = 0;
        while(cur<=end)
        {
            if(nums[cur] == 2)  swap(nums[cur],nums[end--]);
            else if(nums[cur] == 1) cur++;
            else if(nums[cur] == 0) swap(nums[cur++],nums[pre++]);
        }    
 }
