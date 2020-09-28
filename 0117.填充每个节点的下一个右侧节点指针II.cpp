#include"solution.h"
#include "tree.h"

Node* connect(Node* root) {
    if (!root) {
        return nullptr;
    }
    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        int n = q.size();
        Node* last = nullptr;
        for (int i = 1; i <= n; ++i) {
            Node* f = q.front();
            q.pop();
            if (f->left) {
                q.push(f->left);
            }
            if (f->right) {
                q.push(f->right);
            }
            if (i != 1) {
                last->next = f;
            }
            last = f;
        }
    }
    return root;
}