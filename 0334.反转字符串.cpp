#include"solution.h"

//1
void reverseString(vector<char>& s)
{
	reverse(s.begin(), s.end());
}


//2
void reverseString(vector<char>& s)
{
	int n = s.size();
	for (int i = 0; i < n / 2; i++)
	{
		swap(s[i], s[n - 1 - i]);
	}
}