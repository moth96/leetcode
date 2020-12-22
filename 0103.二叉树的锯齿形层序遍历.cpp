//Leetcode 103
vector<vector<int>> zigzagLevelOrder(TreeNode* root)
{
    if (root == nullptr) return {};
    vector<vector<int>> res;
    queue<TreeNode*> Q;
    bool flag = false;
    Q.push(root);
    while(!Q.empty())
    {
        int length = Q.size();
        res.push_back(vector<int>());
        for (int i = 0; i < length; i++)
        {
            TreeNode* temp = Q.front();
            Q.pop();
            res.back().push_back(temp->val);
            if (temp->left) Q.push(temp->left);
            if (temp->right) Q.push(temp->right);
        }
        if (flag)
        {
            reverse(res.back().begin(), res.back().end());
            flag = false;
        }
        else
        {
            flag = true;
        }
    }
    return res;
}
