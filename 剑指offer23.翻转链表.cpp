#include"solution.h"
#include"list.h"

ListNode* reverseList(ListNode* head)
{
	ListNode* pre = nullptr;
	ListNode* cur = head;
	while (head)
	{
		cur = head;
		head = head->next;
		cur->next = pre;
		pre = cur;
	}
	return cur;
}