#include"solution.h"

void backtrack(vector<string>& res, const unordered_map<char, string>& table, const string& digits, int index, string& temp)
{
	if (index == digits.length()) {
		res.push_back(temp);
	}
	else
	{
		char digit = digits[index];
		const string& letters = table.at(digit);
		for (const char& letter : letters) {
			temp.push_back(letter);
			backtrack(res, table, digits, index + 1, temp);
			temp.pop_back();
		}
	}
}
vector<string> letterCombinations(string digits)
{
	unordered_map<char, string> table = {
		{'1',""},
		{'2',"abc"},
		{'3',"def"},
		{'4',"ghi"},
		{'5',"jkl"},
		{'6',"mno"},
		{'7',"pqrs"},
		{'8',"tuv"},
		{'9',"wxyz"}
	};
	int n = digits.size();
	vector<string> res;
	if (digits.empty()) return res;
	string temp;
	backtrack(res, table, digits, 0, temp);
	return res;
}