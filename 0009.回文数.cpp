#include"solution.h"

bool isPalindrome(int x) {
    if (x < 0 || (x % 10 == 0 && x != 0))
        return false;
    int pal = 0;
    while (x > pal)
    {
        int temp = x % 10;
        pal = 10 * pal + temp;
        x /= 10;
    }
    return x == pal || x == pal / 10;
}