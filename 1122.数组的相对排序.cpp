#include "solution.h"

vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2)
{
	int maxNum = *max_element(arr1.begin(), arr1.end());
	vector<int> vec(maxNum + 1);
	for (int x : arr1) ++vec[x];
	vector<int> res;
	for (int x : arr2)
	{
		for (int i = 0; i < vec[x]; ++i) res.push_back(x);
		vec[x] = 0;
	}
	for (int x = 0; x <= maxNum; ++x) 
	{
		for (int i = 0; i < vec[x]; ++i) res.push_back(x);
	}
	return res;
}
