#include"solution.h"

vector<vector<int>> res;
vector<int> cur;

void backtrace(vector<vector<int>>& res, vector<int>& output, int first, int len)
{
    if (first == len)
    {
        res.emplace_back(output);
        return;
    }
    for (int i = first; i < len; i++)
    {
        swap(output[i], output[first]);
        // µÝ¹é
        backtrace(res, output, first + 1, len);
        // »ØÍË
        swap(output[i], output[first]);
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> res;
    backtrace(res, nums, 0, (int)nums.size());
    return res;
}