#include"solution.h"
#include"tree.h"

map<int, int> index;

TreeNode* t1(vector<int>& preorder, vector<int>& inorder, int p_left, int p_right, int i_left, int i_right)
{
    if (p_left > p_right) return nullptr;

    int pre_root = p_left;
    int in_root = index[preorder[p_left]];
    TreeNode* root = new TreeNode(preorder[pre_root]);

    int leftTreeLen = in_root - i_left;

    root->left = t1(preorder, inorder, p_left + 1, p_left + leftTreeLen, i_left, in_root - 1);

    root->right = t1(preorder, inorder, p_left + leftTreeLen + 1, p_right, in_root + 1, i_right);
    return root;
}

TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
    int len = inorder.size();
    for (int i = 0; i < len; i++)
        index[inorder[i]] = i;

    return t1(preorder, inorder, 0, len - 1, 0, len - 1);
}