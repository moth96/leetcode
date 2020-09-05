#include"solution.h"
#include"list.h"

ListNode* removeNthFromEnd(ListNode* head, int n)
{
    if (!head || !head->next) return NULL;
    ListNode* q = head;
    ListNode* p = head;
    while (n--) q = q->next;
    if (!q) return head->next;
    while (q->next)
    {
        p = p->next;
        q = q->next;
    }
    p->next = p->next->next;
    return head;
}
}