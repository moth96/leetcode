#include"solution.h"

//1
int findRepeatNumber(vector<int>& nums)
{
	unordered_map<int, int> table;
	for (auto& i : nums)
	{
		if (table[i])
		{
			return i;
		}
		else
		{
			table[i] = 1;
		}
	}
}

//2
int findRepeatNumber(vector<int>& nums)
{
	set<int> st;
	int res = -1;
	for (auto& i : nums)
	{
		if (st.find(i)!= st.end())
		{
			res = -1;
			break;
		}
		else
		{
			st.insert(i);
		}
	}
	return res;
}

//3
int findRepeatNumber(vector<int>& nums)
{
	int temp;
	for (int i = 0; i < nums.size(); i++)
	{
		if (nums[i] != i)
		{
			if (nums[i] == nums[nums[i]]) return nums[i];
		}
		temp = nums[i];
		nums[temp] = nums[i];
		nums[i] = temp;
	}
	return -1;
}