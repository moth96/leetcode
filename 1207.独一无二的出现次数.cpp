#include "solution.h"

bool uniqueOccurrences(vector<int>& arr)
{
	unordered_map<int,int> umap;
	unordered_set<int> ust;
	for (const auto& elem:arr)
		umap[elem]++;
	for (const auto& elem:umap)
		ust.insert(elem.second);
	return ust.size() == umap.size();
}
