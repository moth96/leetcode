#include"solution.h"

int lengthOfLongestSubstring(string s) {
	unordered_map<char, int> hashTable;
	int n = s.size();
	int maxLen = 0;
	int curLen = 0;
	int start = 0;
	for (int i = 0; i < n; i++)
	{
		if (hashTable.find(s[i]) == hashTable.end())
		{
			curLen++;
			hashTable[s[i]] = i;
		}
		else
		{
			if (curLen > maxLen)
				maxLen = curLen;
			start = max(hashTable[s[i]], start);
			curLen = i - start;
			hashTable[s[i]] = i;
		}
	}
	if (curLen > maxLen)
		maxLen = curLen;
	return maxLen;
}