#include"solution.h"
#include"tree.h"

int post_idx;
unordered_map<int, int> idx_map;

TreeNode* helper(int in_left, int in_right, vector<int>& inorder, vector<int>& postorder)
{
    if (in_left > in_right)    return nullptr;
    int root_val = postorder[post_idx];
    TreeNode* root = new TreeNode(root_val);

    int index = idx_map[root_val];

    post_idx--;
    root->right = helper(index + 1, in_right, inorder, postorder);
    root->left = helper(in_left, index - 1, inorder, postorder);
    return root;
}
TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) 
{
    post_idx = (int)postorder.size() - 1;
    int idx = 0;
    for (auto& val : inorder)
        idx_map[val] = idx++;
    return helper(0, (int)inorder.size() - 1, inorder, postorder);
}