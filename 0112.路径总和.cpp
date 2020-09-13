#include"solution.h"
#include"tree.h"

bool hasPathSum(TreeNode* root, int sum)
{
	if (!root) return false;
	if (!root->left && !root->right && root->val == sum) return true;
	return hasPathSum(root->left, sum - root->val) || hasPathSum(root->right, sum - root->val);
}