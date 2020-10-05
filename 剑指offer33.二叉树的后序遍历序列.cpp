#include"solution.h"
#include"tree.h"

bool verifyPostorder(vector<int>& postorder) 
{
    if (postorder.size() == 0) return true;
    stack<int> q;
    int root = INT_MAX;
    for (int i = postorder.size() - 1; i >= 0; i--) 
    {
        if (postorder[i] > root) return false;
        while (!q.empty() && q.top() > postorder[i]) 
        {
            root = q.top();
            q.pop();
        }
        q.push(postorder[i]);
    }
    return true;
}