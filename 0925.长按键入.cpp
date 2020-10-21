#include"solution.h"

bool isLongPressedName(string name, string typed)
{
	int n = name.size();
	int m = typed.size();
	if (n > m) return false;
	int i = 0, j = 0;
	while (j < m)
	{
		if (i < n && name[i] == typed[j])
		{
			i++;
			j++;
			continue;
		}
		else if (i > 0 && name[i - 1] == typed[j])
		{
			j++;
			continue;
		}
		else return false;
	}
	if (i < n) return false;
	return true;
}