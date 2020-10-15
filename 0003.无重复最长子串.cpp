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

int lengthOfLongestSubstring(string s) 
    {
        if(s.size() == 0) return 0;
        unordered_set<char> st;
        int res = 0;
        int left = 0;
        for(int i = 0; i < s.size(); i++)
        {
            while(st.find(s[i]) != st.end())
            {
                st.erase(s[left]);
                left++;
            }
            res = max(res,i - left + 1);
            st.insert(s[i]);
        }
        return res;
    }
