#include"solution.h"
#include"tree.h"

bool helper(TreeNode* A, TreeNode* B)
{
	if (B == nullptr) return true;
	if (A == nullptr) return false;
	if (A->val != B->val) return false;
	return helper(A->left, B->left) && helper(A->right, B->right);
}

bool isSubStructure(TreeNode* A, TreeNode* B)
{
	if (A == nullptr || B == nullptr) return false;
	bool res = false;
	if (A->val == B->val) res = helper(A, B);
	if (!res) res = isSubStructure(A->left, B);
	if (!res) res = isSubStructure(A->right, B);
	return res;
}