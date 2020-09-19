#include"solution.h"
#include"tree.h"

void dfs(TreeNode* root, int& sum)
{
	if (root == nullptr) return;
	if (root->left && root->left->left == nullptr && root->left->right == nullptr) sum += root->left->val;
	dfs(root->left, sum);
	dfs(root->right, sum);
}

int sumOfLeftLeaves(TreeNode* root)
{
	int sum = 0;
	dfs(root, sum);
	return sum;
}