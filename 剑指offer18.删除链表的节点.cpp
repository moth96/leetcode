#include"solution.h"
#include"list.h"

ListNode* deleteNode(ListNode* head, int val) 
{
    ListNode* pre = head;

    if (pre->val == val) {
        head = pre->next;
    }

    else {
        while (pre->next != NULL && pre->next->val != val) {
            pre = pre->next;
        }

        if (pre->next->val == val) {
            ListNode* ptr = pre->next->next;
            pre->next = ptr;
        }
    }

    return head;
}