#include"solution.h"

vector<vector<int>> levelOrderBottom(TreeNode* root)
{
	vector<vector<int>> res;
	queue<TreeNode*> q;
	if (!root) return res;
	q.push(root);
	while (!q.empty())
	{
		int length = q.size();
		res.push_back(vector<int>());
		for (int i = 0; i < length; i++)
		{
			TreeNode* temp = q.front();
			q.pop();
			res.back().push_back(temp->val);
			if (temp->left) q.push(temp->left);
			if (temp->right) q.push(temp->right);
		}
	}
	reverse(res.begin(), res.end());
	return res;
}