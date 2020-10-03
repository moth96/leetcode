#include"solution.h"
#include"list.h"

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2)
{
	ListNode* res = new ListNode(-1);
	ListNode* q = res;
	while (true)
	{
		if (l1 == nullptr || l2 == nullptr) break;
		if (l1->val < l2->val)
		{
			res->next = l1;
			l1 = l1->next;
			res = res->next;
		}
		else
		{
			res->next = l2;
			l2 = l2->next;
			res = res->next;
		}
	}
	if (l1 == nullptr) res->next = l2;
	else res->next = l1;
	return q->next;
}