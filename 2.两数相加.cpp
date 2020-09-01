#include"solution.h"
#include"list.h"

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
{
	ListNode* l = new ListNode(-1);
	ListNode* res = l;
	int sum = 0;
	bool count = false;
	while (l1 != nullptr || l2 != nullptr)
	{
		sum = 0;
		if (l1 != nullptr) 
		{
			sum += l1->val;
			l1 = l1->next;
		}
		if (l2 != nullptr)
		{
			sum += l2->val;
			l2 = l2->next;
		}
		if (count)
			sum++;
		l->next = new ListNode(sum % 10);
		l = l->next;
		count = sum > 9 ? true : false;
	}
	if (count)
		l->next = new ListNode(1);
	return res->next;
}
