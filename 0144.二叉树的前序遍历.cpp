#include "solution.h"

void helper(vector<int>& res, TreeNode* root)
{
	if(!root) return;
	res.push_back(root->val);
	helper(res, root->left);
	helper(res, root->right);
}

vector<int> preorderTraversal(TreeNode* root)
{
	vector<int> res;
	helper(res, root);
	return res;
}
