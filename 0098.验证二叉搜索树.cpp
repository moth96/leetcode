#include"solution.h"
#include"tree.h"

void traversal(TreeNode* root, vector<int>& nums)
{
	if (!root) return;
	traversal(root->left, nums);
	nums.push_back(root->val);
	traversal(root->right, nums);
}

bool isValidBST(TreeNode* root) 
{
	vector<int> nums;
	traversal(root, nums);
	for (int i = 1; i < nums.size(); i++)
	{
		if (nums[i - 1] >= nums[i])
			return false;
	}
	return true;
}