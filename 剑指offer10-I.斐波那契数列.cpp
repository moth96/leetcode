#include"solution.h"

int fib(int n)
{
	int f0 = 0, f1 = 1;
	if (n == 0) return 0;
	if (n == 1) return 1;
	int res = 0;
	for (int i = 2; i <= n; i++)
	{
		res = (f0 + f1)%(1000000007);
		f0 = f1;
		f1 = res;
	}
	return res;
}