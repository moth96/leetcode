#include"solution.h"

int reverse(int x)
{
	int res = 0;
	while (x)
	{
		int num = x % 10;
		res = 10 * res + num;
		x /= 10;
	}
	return res;
}