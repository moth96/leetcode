#include"solution.h"
#include"tree.h"

vector<int> levelOrder(TreeNode* root)
{
	if (root == nullptr) return {};
	queue<TreeNode*>Q;
	vector<int>res;
	Q.push(root);
	while (!Q.empty())
	{
		TreeNode* temp = Q.front();
		Q.pop();
		res.push_back(temp->val);
		if (temp->left) Q.push(temp->left);
		if (temp->right) Q.push(temp->right);
	}
	return res;
}