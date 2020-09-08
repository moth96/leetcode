#include"solution.h"
#include"tree.h"

void traversal(TreeNode* root,vector<int>& res)
{
	if (!root) return;
	traversal(root->left,res);
	res.push_back(root->val);
	traversal(root->left, res);
}

vector<int> inorderTraversal(TreeNode* root)
{
	vector<int> res;
	traversal(root,res);
	return res;
}