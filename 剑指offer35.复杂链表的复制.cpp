#include"solution.h"

Node* copyRandomList(Node* head) 
{
    if (head == NULL)  return head;
    unordered_map<Node*, Node*>mp;
    Node* t = head;
    while (t != NULL) 
    {
        mp[t] = new Node(t->val);
        t = t->next;
    }
    t = head;
    while (t != NULL) 
    {
        if (t->next) 
        {
            mp[t]->next = mp[t->next];
        }
        if (t->random) 
        {
            mp[t]->random = mp[t->random];
        }
        t = t->next;
    }
    return mp[head];
}