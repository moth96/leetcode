#include"solution.h"
#include"tree.h"

vector<vector<int>> res;
vector<int> cur;

void backtrack(TreeNode* root, int sum)
{
	if (root == nullptr) return;
	cur.push_back(root->val);
	if (!root->left && !root->right && root->val == sum)
	{
		res.push_back(cur);
	}
	backtrack(root->left, sum - root->val);
	backtrack(root->right, sum - root->val);
	cur.pop_back();
}

vector<vector<int>> pathSum(TreeNode* root, int sum)
{
	backtrack(root, sum);
	return res;
}