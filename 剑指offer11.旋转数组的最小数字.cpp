#include"solution.h"

int minArray(vector<int>& numbers)
{
    int n = numbers.size();
    if(n==0) return -1;
    if(n==1) return numbers[0];
    for(int i = 1;i<n;i++)
    {
        if(numbers[i] < numbers[i-1]) return numbers[i];
    }
    return numbers[0];
}