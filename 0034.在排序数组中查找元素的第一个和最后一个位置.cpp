#include"solution.h"

int findLeft(vector<int>& nums, int target)
{
    int n = nums.size();
    int l = 0, r = n - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (nums[mid] == target) r = mid - 1;
        else if (nums[mid] < target) l = mid + 1;
        else r = mid - 1;
    }
    if (l != n && nums[l] == target)
        return l;
    return -1;
}

int findRight(vector<int>& nums, int target)
{
    int n = nums.size();
    int l = 0, r = n - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (nums[mid] == target) l = mid + 1;
        else if (nums[mid] < target) l = mid + 1;
        else r = mid - 1;
    }
    return r;
}

vector<int> searchRange(vector<int>& nums, int target)
{
    int n = nums.size();
    if (n == 0) return { -1,-1 };
    int left = findLeft(nums, target);
    if (left == -1) return { -1,-1 };
    int right = findRight(nums, target);
    return { left,right };
}