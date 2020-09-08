#include"solution.h"
#include"tree.h"

int maxSum = INT_MIN;
int maxGain(TreeNode* root)
{
    if (root == nullptr) return 0;
    int left = max(0, maxGain(root->left));
    int right = max(0, maxGain(root->right));

    maxSum = max(maxSum, left + right + root->val);
    return max(left, right) + root->val;
}

int maxPathSum(TreeNode* root)
{
    maxGain(root);
    return maxSum;
}