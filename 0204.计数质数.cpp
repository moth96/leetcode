#include "solution.h"

int countPrimes(int n)
{
    vector<int> isPrimer(n,1);
    int ret = 0;
    for (int i = 2; i < n; i++)
    {
        if (isPrimer[i]) ret++;
        if ( (long long)i * i < n)
        {
            for (long long j = i * i; j < n; j += i)
                isPrimer[j] = 0;
        }
    }
    return ret;
}
