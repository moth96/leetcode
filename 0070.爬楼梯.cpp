#include"solution.h"

int climbStairs(int n) {
    int res = 1, p1 = 0, p2 = 0;
    for (int i = 1; i <= n; i++)
    {
        p1 = p2;
        p2 = res;
        res = p2 + p1;
    }
    return res;
}