#include"solution.h"
#include"tree.h"

vector<vector<int>> levelOrder(TreeNode* root)
{
	if (!root) return {};
	vector<vector<int>> res;
	queue<TreeNode*>Q;
	Q.push(root);
	bool flag = false;
	while (!Q.empty())
	{
		int len = Q.size();
		res.push_back(vector<int>());
		for (int i = 0; i < len; i++)
		{
			TreeNode* temp = Q.front();
			Q.pop();
			res.back().push_back(temp->val);
			if (temp->left) Q.push(temp->left);
			if (temp->right) Q.push(temp->right);
		}
		if (flag)
		{
			reverse(res.back().begin(), res.back().end());
			flag = false;
		}
		else flag = true;
	}
	return res;
}