#include"solution.h"
#include"tree.h"

bool helper(TreeNode* left, TreeNode* right)
{
	if (left == nullptr && right != nullptr) return false;
	else if (left != nullptr && right == nullptr) return false;
	else if (left == nullptr && right == nullptr) return true;
	else if (left->val != right->val) return false;
	return helper(left->right, right->left) && helper(left->left, right->right);
}

bool isSymmetric(TreeNode* root)
{
	if (root == nullptr) return true;
	return helper(root->left, root->right);
}