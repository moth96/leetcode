#include"solution.h"

int singleNumber(vector<int>& nums) {
    int res = 0;
    for (auto e : nums) res ^= e;
    return res;
}
