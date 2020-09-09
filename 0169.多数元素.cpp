#include"solution.h"

int majorityElement(vector<int>& nums) 
{
	unordered_map<int, int> counts;
	int maj = 0;
	int res;
	for (auto& num : nums)
	{
		counts[num]++;
		if (counts[num] > maj)
		{
			maj = counts[num];
			res = num;
		}
	}
	return res;
}