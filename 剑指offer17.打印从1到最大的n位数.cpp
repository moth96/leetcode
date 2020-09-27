#include"solution.h"

vector<int> printNumbers(int n)
{
	int maxNum = 1;
	while (n--) maxNum *= 10;
	vector<int> res(maxNum - 1);
	for (int i = 0; i < maxNum - 1; i++) res[i] = i + 1;
	return res;
}