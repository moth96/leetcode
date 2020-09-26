#include"solution.h"

int cuttingRope(int n)
{
    if (n <= 3) return n - 1;
    if (n == 4) return 4;
    long res = 1;
    while (n > 4)
    {
        res *= 3;
        res %= 1000000007;
        n -= 3;
    }
    return res * n % 1000000007;
}