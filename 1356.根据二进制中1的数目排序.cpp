#include "solution"

int returnNumofone(int a)
{
	int num = 0;
	while(a)
	{
		num += (a & 1);
		a = a >> 1;
	}
	return num;
}

vector<int> sortByBits(vector<int>& arr)
{
	vector<int> bit(10001,0);
	for (auto elem : arr) bit[elem] = returnNumofone(elem);
	sort(arr.begin(), arr.end(), [&](int x, int y)
			{
				if (bit[x] < bit[y]) return true;
				if (bit[x] > bit[y]) return false;
				return x < y;
			});
	return arr;
}
