#include "solition.h"

vector<int> getIntersection(unordered_set<int>& uset1, unordered_set<int>& uset2)
{
	if (uset1.size() > uset2.size())
		return getIntersection(uset2, uset1);
	vector<int> res;
	for (const auto elem : uset1)
		if (uset2.count(elem))
		{
			res.push_back(elem);
		}
	return res;
}

vector<int> intersection(vector<int>& nums1, vector<int>& nums2)
{
	unordered_set<int> uset1,uset2;
	for(const auto elem : nums1)
		uset1.insert(elem);
	for(const auto elem : nums2)
		uset2.insert(elem);
	return getIntersection(uset1, uset2);
}
