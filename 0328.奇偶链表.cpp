#include "solution.h"

ListNode* oddEvenList(ListNode* head) 
{
    if (head == nullptr) return nullptr;
    ListNode* evenHead = head->next;
    ListNode* odd = head;
    ListNode* even = evenHead;
    while(even != nullptr && even->next != nullptr)
    {
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }
    odd->next = evenHead;
	return head;
    }
