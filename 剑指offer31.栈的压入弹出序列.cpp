#include"solution.h"

bool validateStackSequences(vector<int>& pushed, vector<int>& popped)
{
	int n = pushed.size();
	stack<int>st;
	int i = 0;
	for (int elem:pushed)
	{
		st.push(elem);
		while (!st.empty() && st.top() == popped[i])
		{
			st.pop();
			i++;
		}
	}
	return st.empty();
}