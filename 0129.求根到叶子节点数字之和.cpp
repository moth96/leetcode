#include "solution.h"

int sum = 0;
int cur = 0;

void dfs(Tree* root)
{
	if (!root) return;
	cur = cur * 10 + root->val;
	if (!root->left && !root->right)
	{
		sum += cur;
	}
	if(root->left) dfs(root->left);
	if(root->right) dfs(root->right);
	cur = (cur - root->val) / 10;
}

int sumNumbers(TreeNode* root)
{
	dfs(root);
	return sum;
}
