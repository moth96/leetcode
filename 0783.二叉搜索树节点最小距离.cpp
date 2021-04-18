void dfs(TreeNode* root, int& pre, int& ret){
    if(root == nullptr){
        return;
    }
    dfs(root->left, pre, ret);
    if(pre == -1){
        pre = root->val;
    }else{
        ret = min(ret, root->val - pre);
        pre = root->val;
    }
    dfs(root->right, pre, ret);
}

int minDiffInBST(TreeNode* root) {
    int pre = -1;
    int ret = INT_MAX;
    dfs(root, pre, ret);
    return ret;
}
