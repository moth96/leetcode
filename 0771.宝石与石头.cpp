#include"solution.h"

//set
int numJewelsInStones(string J, string S)
{
	set<char> st;
	int res = 0;
	for (const auto elem : J) st.insert(elem);
	for (const auto elem : S)
	{
		if (st.find(elem) != st.end()) res++;
	}
	return res;
}

//hash
int numJewelsInStones(string J, string S)
{
	unordered_map<char, int> umap;
	int res = 0;
	for (const auto elem : J) umap[elem] = 1;
	for (const auto elem : S)
	{
		if (umap[elem]) res++;
	}
	return res;
}