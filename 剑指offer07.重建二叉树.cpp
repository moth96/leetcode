#include"solution.h"
#include"tree.h"

//1
TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder)
{
	if (preorder.size() == 0) return nullptr;
	if (preorder.size() == 1)
	{
		TreeNode* root = new TreeNode(preorder[0]);
		return root;
	}
	TreeNode* root = new TreeNode(preorder[0]);
	auto itr = inorder.begin();
	while (*itr != preorder[0]) itr++;
	int left = itr - inorder.begin();
	vector<int> leftpre(preorder.begin() + 1, preorder.begin() + 1 + left);
	vector<int> leftin(inorder.begin(), itr);
	
	vector<int> rightpre(preorder.begin() + 1 + left, preorder.end());
	vector<int> rightin(++itr, inorder.end());

	root->left = buildTree(leftpre, leftin);
	root->right = buildTree(rightpre, rightin);
	return root;
}
