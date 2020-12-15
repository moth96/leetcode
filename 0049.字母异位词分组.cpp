#include"solution.h"

//1
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

//2

vector<vector<string>> groupAnagrams(vector<string>& strs)
{
    vector<vector<string>> res;
    unordered_map<string, vector<string>> table;
    vector<int> primer = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101}
    for (string& str : strs)
    {
        int i = 1;
        for(char& c : str)
            i *= primer[c-97];
        table[i].push_back(str);
    }
    for(auto x : table)
        res.push_back(x.second);
    return res;
}
