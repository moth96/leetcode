#include"solution.h"
#include"list.h"

ListNode* getKthFromEnd(ListNode* head, int k)
{
	ListNode* p = head;
	ListNode* q = head;
	while (k--)
		q = q->next;
	while (q)
	{
		p = p->next;
		q = q->next;
	}
	return p;
}