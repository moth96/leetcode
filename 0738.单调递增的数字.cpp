#include "solution.h"

int monotoneIncreasingDigits(int N)
{
	int res = N;
	int i = 1;
	int n = 0;
	while(i < res/10)
	{
		n = res / i % 100;
		i *= 10;
		if(n/10 > n%10)
			res = res / i * i - 1;
	}
	return res;
}
