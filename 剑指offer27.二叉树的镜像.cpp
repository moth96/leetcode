#include"solution.h"
#include"tree.h"

TreeNode* mirrorTree(TreeNode* root)
{
	if (root == nullptr) return root;
	TreeNode* temp = mirrorTree(root->left);
	root->left = mirrorTree(root->right);
	root->right = temp;
	return root;
}