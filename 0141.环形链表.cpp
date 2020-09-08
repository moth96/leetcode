#include"solution.h"
#include"list.h"

bool hasCycle(ListNode* head) 
{
	ListNode* q = head;
	ListNode* p = head;
	while (q != nullptr && q->next != nullptr)
	{
		q = q->next->next;
		p = p->next;
		if (q == p) return true;
	}
	return false;
}