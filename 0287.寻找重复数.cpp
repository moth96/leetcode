#include"solution.h"

int findDuplicate(vector<int>& nums)
{
	unordered_map<int, int> hashTable;
	for (int i = 0; i < nums.size(); i++)
	{
		if (hashTable[nums[i]]) return nums[i];
		else
			hashTable[nums[i]] = 1;
	}
}