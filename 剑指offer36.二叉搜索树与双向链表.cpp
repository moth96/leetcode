#include"solution.h"
#include"tree.h"

void inorder(vector<Node*>& vec, Node* root)
{
	if (!root) return;
	inorder(vec, root->left);
	vec.push_back(root);
	inorder(vec, root->right);
}

Node* treeToDoublyList(Node* root)
{
	if (!root) return nullptr;
	vector<Node*> vec;
	inorder(vec, root);
	int n = vec.size();
	for (int i = 0; i < n; i++)
	{
		vec[i]->left = vec[(i + n - 1) % n];
		vec[i]->right = vec[(i + 1) % n];
	}
	return vec[0];
}