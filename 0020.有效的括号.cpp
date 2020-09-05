#include"solution.h"

bool isValid(string s)
{
	stack<char> st;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == ' ') continue;
		else if (s[i] == '(' || s[i] == '[' || s[i] == '{')
			st.push(s[i]);
		else if (s[i] == ')')
		{
			if (st.empty()) return false;
			else if (st.top() == '(') st.pop();
			else return false;
		}
		else if (s[i] == ']')
		{
			if (st.empty()) return false;
			else if (st.top() == '[') st.pop();
			else return false;
		}
		else if (s[i] == '}')
		{
			if (st.empty()) return false;
			else if (st.top() == '{') st.pop();
			else return false;
		}
	}
	if (st.empty()) return true;
	else return false;
}