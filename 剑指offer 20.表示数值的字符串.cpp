#include"solution.h"

bool isNumber(string s)
{
	int n = s.size();
	int i = 0;
	bool point = false;
	bool eflag = false;
	bool sign = true;
	while (i < n)
	{
		if ((s[i] == '+' || s[i] == '-') && sign) i++;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			point = true;
			eflag = true;
			sign = false;
			i++;
		}
		else if (s[i] == '.' && point)
		{
			i++;
			point = false;
		}
		else if ((s[i] == 'e' || s[i] == 'E') && eflag)
		{
			i++;
			eflag = false;
			sign = true;
			point = false;
		}
		else break;
	}
	return i == n;
}
