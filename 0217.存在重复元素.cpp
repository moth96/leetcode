#include "solution.h"

bool containsDuplicate(vector<int>& nums)
{
	unordered_map<int, int> umap;
	for (const auto x : nums)
	{
		if(umap[x]) return true;
		else
		{
			umap[x]++;
		}
	}
	return false;
}
