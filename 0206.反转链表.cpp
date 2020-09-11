#include"solution.h"
#include"list.h"

ListNode* reverseList(ListNode* head)
{
	ListNode* pre = nullptr;
	ListNode* cur = head;
	ListNode* nxt = head;

	while (nxt)
	{
		cur = nxt;
		nxt = nxt->next;
		cur->next = pre;
		pre = cur;
	}

	return pre;
}