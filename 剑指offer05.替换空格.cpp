#include"solution.h"

string replaceSpace(string s)
{
	string res;
	for (char elem : s)
	{
		if (elem == ' ') res += "%20";
		else res += elem;
	}
	return res;
}