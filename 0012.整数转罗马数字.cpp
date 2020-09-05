#include"solution.h"

string intToRoman(int num)
{
	string res;
	int nums[13] = { 1000,900,500,400,100,90,50,40,10,9,5,4,1 };
	string roman[13] = { "M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I" };
	for (int i = 0; i < 13; i++)
	{
		while (num >= nums[i])
		{
			num -= nums[i];
			res += roman[i];
		}
	}
	return res;
}