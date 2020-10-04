#include"solution.h"
#include"tree.h"

vector<vector<int>> res;
vector<int> cur;

void dfs(TreeNode* root, int sum)
{
	if (!root->left && !root->left && root->val == sum)
	{
		cur.push_back(root->val);
		res.push_back(cur);
		return;
	}
	cur.push_back(root->val);
	if (root->left) dfs(root->left, sum - root->val);
	if (root->right) dfs(root->right, sum - root->val);
	cur.pop_back();
}

vector<vector<int>> pathSum(TreeNode* root, int sum)
{
	dfs(root, sum);
	return res;
}