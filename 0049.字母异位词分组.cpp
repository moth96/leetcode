#include"solution.h"

vector<vector<string>> groupAnagrams(vector<string>& strs)
{
	vector<vector<string>> res;
	unordered_map<string, vector<string>> table;

	for (string& str : strs)
	{
		string t = str;
		sort(t.begin(), t.end());
		table[t].push_back(str);
	}

	for (auto& i : table)
		res.push_back(i.second);
	return res;
}